#include <iostream>

int main() {
    int numbers[15] {45, 46, 47, 48, 49, 50, 51, 47, 53, 54, 55, 56, 57, 58, 59};
    for (int i = 0; i < 15; i++) {
        for(int j = i + 1; j < 15 - i; j++) {
            if (numbers[i] == numbers[j]) {
                std::cout << numbers[i];
                break;
            }
        }
    }
}
