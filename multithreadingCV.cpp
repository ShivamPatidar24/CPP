#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;

int may = 0;
std::mutex m;
std::condition_variable cv;

void add(int s) {
    std::unique_lock<std::mutex> m1(m);
    may = s;

    for (int i = 0; i < 1000000; i++) {
        may++;
    }
    cout << may << endl;
    m1.unlock();
    cv.notify_one(); // Notify the waiting thread
}



void mul(int a) {
    std::unique_lock<std::mutex> m2(m);
    cv.wait(m2, [] { return may != 0; }); // Wait until may is not 0

    may = a;
    for (int i = 0; i < 1000000; i++) {
        may++;
    }
    cout << may << endl;
}

int main() {
    std::thread t1(add, 45);
    std::thread t2(mul, 43);
    t1.join();
    t2.join();
    cout << may << endl;
    return 0;
}

