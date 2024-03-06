import math

def ln_series(x, tolerance=1e-6):
    if abs(x) >= 1:
        raise ValueError("Ряд сходится только для |x| < 1")
    result = 0.0
    term = x
    n = 1
    while abs(term) > tolerance:
        result += term
        n += 1
        term = (-1) ** (n + 1) * x ** n / n
    return result

x_values = [0, 0.5]

for x in x_values:
    approx = ln_series(x)
    exact = math.log(x + 1)
    print(f"ln({x}+1) ≈ {approx} (приближенно), точное значение: {exact}")