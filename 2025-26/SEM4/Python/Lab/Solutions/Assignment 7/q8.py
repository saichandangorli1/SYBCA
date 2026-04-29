# 8. Write a recursive Python function to generate the Fibonacci series up to n terms.
def fibonacci(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        fib_series = fibonacci(n - 1)
        fib_series.append(fib_series[-1] + fib_series[-2])
        return fib_series
# Example usage:
n_terms = 3
print(f"Fibonacci series up to {n_terms} terms: {fibonacci(n_terms)}")
# Output:
# Fibonacci series up to 3 terms: [0, 1, 1]

