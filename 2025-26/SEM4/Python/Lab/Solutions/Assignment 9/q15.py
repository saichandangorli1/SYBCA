# Create a package geometry with a module that calculates:
# ● Area of rectangle
# ● Area of triangle
# Import and use these functions in another file.


# geometry/area.py
def area_rectangle(length, width):
    return length * width  # Function to calculate the area of a rectangle using the formula A = l * w

def area_triangle(base, height):
    return 0.5 * base * height  # Function to calculate the area of a triangle using the formula A = 0.5 * b * h

# main_program.py
from geometry.area import area_rectangle, area_triangle  # Import the functions from the area module
# Example usage of the area functions
length = 5
width = 3

base = 4

height = 6

rectangle_area = area_rectangle(length, width)  # Calculate the area of the rectangle
triangle_area = area_triangle(base, height)  # Calculate the area of the triangle

print(f"The area of the rectangle with length {length} and width {width} is: {rectangle_area}")  # Output: The area of the rectangle with length 5 and width 3 is: 15
print(f"The area of the triangle with base {base} and height {height} is: {triangle_area}")  # Output: The area of the triangle with base 4 and height 6 is: 12.0
