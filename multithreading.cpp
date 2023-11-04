#include<iostream>
#include<thread>
#include<chrono>
#include<atomic>

using namespace std;
// volatile int addnumber =0;
std::atomic<int> addnumber = 0;
void fun()
{
    // cout << "Child thread" << n << endl;
    for(int i = 0 ; i<100000; i++)
    {
        
        addnumber++;
        
    }
    //  std::this_thread::sleep_for(chrono::seconds(5));
}



int main()
{
    std::thread t1(fun);
    std::thread t2(fun);
    std::thread t3(fun);
    std::thread t4(fun);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    cout << addnumber << endl;
      
    std::cout<< "main thread " << endl;
}
