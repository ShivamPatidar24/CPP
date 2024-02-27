#include <iostream>

int ByteTobit(int byte) {
    int count = 0;
    while (byte) {
        count += byte & 1;
        byte >>= 1;
    }
    return count;
}

int main() {
    int byte_value = 47; // Example byte
    int bites_num = ByteTobit(byte_value);
    std::cout << "Number of bits set in byte " << byte_value << ": " << bites_num << std::endl;
    return 0;
}
