def double_factorial(n):
    if n < 0:
        return None
    elif n == 0 or n == 1:
        return 1
    else:
        return n * double_factorial(n-2)

print(double_factorial(0))
print(double_factorial(1))
print(double_factorial(2))
print(double_factorial(3))
print(double_factorial(4))
print(double_factorial(5))
print(double_factorial(6))
print(double_factorial(7))