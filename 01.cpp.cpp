#include <iostream>

unsigned long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    unsigned long long prev = 0, curr = 1;
    for (int i = 2; i <= n; ++i) {
        unsigned long long next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main() {
    int index;
    std::cout << "Введите индекс числа Фибоначчи: ";
    std::cin >> index;

    if (index < 0) {
        std::cout << "Индекс не может быть отрицательным." << std::endl;
        return 1;
    }
    
    unsigned long long fibNumber = fibonacci(index);
    std::cout << "Число Фибоначчи под индексом " << index << " равно " << fibNumber << std::endl;
    
    return 0;
}