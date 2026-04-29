# 7. Write a recursive Python function to calculate the factorial of a number
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)
# Example usage:
print(factorial(5))  # Output: 120
print(factorial(0))  # Output: 1
