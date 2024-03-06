#include <iostream>
#include <cmath>

double factorial(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double sin_taylor_series(double x) {
    const double EPSILON = 1e-6;
    double term = x;  
    double sin_x = 0.0;
    int n = 0;

    while (std::abs(term) > EPSILON) {
        sin_x += term;
        n++;
        term = std::pow(-1, n) * std::pow(x, 2 * n + 1) / factorial(2 * n + 1);
    }

    return sin_x;
}

int main() {
    double angle;
    std::cout << "Укажите угол в радианах: ";
    std::cin >> angle;

    double result = sin_taylor_series(angle);
    std::cout << "sin(" << angle << ") = " << result << std::endl;
    std::cout << "std::sin(" << angle << ") = " << std::sin(angle) << " (для проверки)" << std::endl;

    return 0;
}