
# 6. Write a Python function show(first, *numbers) that stores the first argument in a
# separate variable and remaining values in *numbers, then print them.

def show(first, *numbers):
    print("First argument:", first)
    print("Remaining numbers:", numbers)
# Example usage:
show(10, 20, 30, 40)
# Output:
# First argument: 10
# Remaining numbers: (20, 30, 40)

