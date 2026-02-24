# Write a function square(n) that returns the square of a number.
# Write another function cube(n) that uses square() and returns the cube

def square(n):
    return n * n

def cube(n):
    return square(n) * n
number = 3
print(f"The square of {number} is: {square(number)}")
print(f"The cube of {number} is: {cube(number)}")
