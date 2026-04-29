# Write a Python program using from … import statement to import only pi and calculate the
# area of a circle.

from math import pi  # Import only the pi constant from the math module
radius = 3  # Define the radius of the circle

area = pi * radius ** 2  # Calculate the area of the circle using the formula A = πr²
print(f"The area of the circle with radius {radius} is: {area}")  # Output: The area of the circle with radius 3 is: 28.274333882308138

