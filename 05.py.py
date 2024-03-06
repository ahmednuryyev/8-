import math

def hyperbolic_cosine(x, tolerance=1e-6):
    result = 1.0
    term = 1.0
    n = 1

    while True:
        term *= x * x / ((2 * n - 1) * (2 * n))
        if term < tolerance:
            break
        result += term
        n += 1  

    return result

x_values = [0, 0.5, 1, 1.5, 2]
for x in x_values:
    approx = hyperbolic_cosine(x)
    exact = math.cosh(x)
    print(f"cosh({x}) ≈ {approx} (приближенно), точное значение: {exact}")