//#include <iostream>
//#include <mutex>
//#include <thread>
//
//std::mutex resource1, resource2;
//
//void processOne()
//{
//    resource1.lock();
//    std::cout << "Process One has acquired resource 1" << std::endl;
//    std::this_thread::sleep_for(std::chrono::seconds(1));
//
//    resource2.lock();
//    std::cout << "Process One has acquired resource 2" << std::endl;
//
//    // Perform operations with resource 1 and resource 2
//
//    resource2.unlock();
//    resource1.unlock();
//}
//
//void processTwo()
//{
//    resource2.lock();
//    std::cout << "Process Two has acquired resource 2" << std::endl;
//    std::this_thread::sleep_for(std::chrono::seconds(1));
//
//    resource1.lock();
//    std::cout << "Process Two has acquired resource 1" << std::endl;
//
//    // Perform operations with resource 1 and resource 2
//
//    resource1.unlock();
//    resource2.unlock();
//}
//
//int main()
//{
//    std::thread t1(processOne);
//    std::thread t2(processTwo);
//
//    t1.join();
//    t2.join();
//
//    return 0;
//}





#include<iostream>
#include<mutex>
#include<thread>
#include<chrono>
std::mutex m1, m2;
void one()
{
    m1.lock();
    std::cout << "ONE M1 RESOURCE ::: "<<  std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m2.lock();
    std::cout << "ONE M2 RESOURCE ::: "<< std::endl;
    m2.unlock();
    m1.unlock();
}

void two()
{
    m2.lock();
    std::cout << "TWO M2 RESOURCE ::: "<<  std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m1.lock();
    std::cout << "TWO M1 RESOURCE ::: "<< std::endl;
    m1.unlock();
    m2.unlock();
    
}

int main()
{
    std::thread t1(one);
    std::thread t2(two);
    
    t1.join();
    t2.join();
}
