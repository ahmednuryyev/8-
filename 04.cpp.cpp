#include <iostream>
#include <cmath>

double factorial(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double exp_taylor_series(double x) {
    const double EPSILON = 1e-6;
    double term = 1.0;
    double exp_x = term;
    int n = 1;

    while (std::abs(term) > EPSILON) {
        term = std::pow(x, n) / factorial(n);
        exp_x += term;
        n++;
    }

    return exp_x;
}

int main() {
    double number;
    std::cout << "Введите число для вычисления e^x: ";
    std::cin >> number;

    double result = exp_taylor_series(number);
    std::cout << "e^" << number << " = " << result << std::endl;
    std::cout << "std::exp(" << number << ") = " << std::exp(number) << " (для проверки)" << std::endl;

    return 0;
}