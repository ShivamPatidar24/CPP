#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> sharedValue(0);

void incrementValue() {
    for (int i = 0; i < 10000; ++i) {
        sharedValue.fetch_add(1, std::memory_order_relaxed);
    }
}

int main() {
    std::thread t1(incrementValue);
    std::thread t2(incrementValue);

    t1.join();
    t2.join();

    std::cout << "Final value of sharedValue: " << sharedValue.load() << std::endl;

    int expected = 20000;
    int desired = 30000;
    bool success = sharedValue.compare_exchange_strong(expected, desired);

    if (success) {
        std::cout << "Value successfully changed from " << expected << " to " << desired << std::endl;
        
    } else {
        std::cout << "Value was not " << expected << ", so it remains unchanged." << std::endl;
    }

    return 0;
}

