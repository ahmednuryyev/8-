#include <iostream> 
#include <cmath> 
 
double factorial(int n) { 
    double result = 1.0; 
    for (int i = 2; i <= n; ++i) { 
        result *= i; 
    } 
    return result; 
} 
 
double cos_taylor_series(double x) { 
    const double EPSILON = 1e-6; 
    double term = 1.0;
    double cos_x = 0.0; 
    int n = 0; 
 
    while (std::abs(term) > EPSILON) { 
        cos_x += term; 
        n++; 
        term =  std::pow(-1, n) * std::pow(x, 2 * n) / factorial(2 * n); 
    } 
 
    return cos_x; 
} 
 
int main() { 
    double angle; 
    std::cout << "Укажите угол в радианах: "; 
    std::cin >> angle; 
 
    double result = cos_taylor_series(angle); 
    std::cout << "cos(" << angle << ") = " << result << std::endl; 
    std::cout << "std::cos(" << angle << ") = " << std::cos(angle) << " (для проверки)" << std::endl; 
 
    return 0; 
}