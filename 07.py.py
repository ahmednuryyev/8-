import math

def sinc_series(x, tolerance=1e-6):
    if x == 0: 
        return 1.0

    result = 0.0
    term = 1.0 
    n = 0

    while abs(term) > tolerance:
        result += term
        n += 1
        term *= (-1) * x**2 / ((2*n) * (2*n+1)) 

    return result

x_values = [0, 0.5, 1, 3.14159]

for x in x_values:
    approx = sinc_series(x)
    exact = math.sin(x) / x if x != 0 else 1.0
    print(f"sin({x})/{x} ≈ {approx} (приближенно), точное значение: {exact}")