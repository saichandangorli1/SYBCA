# Write a Python program to calculate the area and circumference of a circle using math.pi.

import math  # Import the math module to access the constant pi

radius = 5  # Define the radius of the circle
area = math.pi * radius ** 2  # Calculate the area of the circle using the formula A = πr²
circumference = 2 * math.pi * radius  # Calculate the circumference using the formula C = 2πr

print(f"The area of the circle with radius {radius} is: {area}")  # Output: The area of the circle with radius 5 is: 78.53981633974483