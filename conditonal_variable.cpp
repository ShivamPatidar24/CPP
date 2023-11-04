#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

std::mutex m;
std::condition_variable cv;
int balance = 0;

void addMoney(int money)
{
    std::lock_guard<std::mutex> m1(m);
    balance = balance + money;
    std::cout<< "Money will be added in your bank account : " << money <<std::endl; ;
    cv.notify_one();
}

void withDraw(int money)
{
    std::unique_lock<std::mutex> m2(m);
    cv.wait(m2, [] { return (balance != 0) ? true : false; });
    if(balance >= money)
    {
      balance = balance - money;
    std::cout << money << " : money will we decuted " <<std::endl;
    }
    else
    {
        std::cout << "not valid balance ";
    }
    std::cout << "current balance is :" << balance <<std::endl;
}

int main()
{
    
    int x;
    std::cout << "Enter the amount : " << std::endl;
    std::cin>>x;
    std::thread t1(addMoney, x);
    std::thread t2(withDraw, 500);
    
    t1.join();
    t2.join();
}
