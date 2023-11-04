#include<iostream>
#include<thread>
#include<chrono>
#include<atomic>
#include<mutex>
#include<condition_variable>

using namespace std;
int addnumber = 0;
std::mutex m;

std::condition_variable cv;
void fun()
{
    // cout << "Child thread" << n << endl;
    for(int i = 0 ; i<100000; i++)
    {
        
        std::lock_guard<std::mutex> lock(m);
        addnumber++;
        
    }
     std::this_thread::sleep_for(chrono::seconds(5));
     cv.notify_one();
}



int main()
{
    std::thread t1(fun);
    std::thread t2(fun);
    std::thread t3(fun);
    std::thread t4(fun);
    
    {
        std::unique_lock<std::mutex> lock(m);
        cv.wait(lock);
    }
    
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    cout << addnumber << endl;
      
    std::cout<< "main thread " << endl;
}
