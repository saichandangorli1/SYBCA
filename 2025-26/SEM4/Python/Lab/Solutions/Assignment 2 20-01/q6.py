# # 6.	Using if condition
# # Write a Python program to find the area of a circle only if the radius is greater than zero.

r = float(input("Enter the radius of the circle: "))
if r > 0:
    area = 3.14 * r * r
    print("The area of the circle is:", area)
else:
    print("Radius must be greater than zero to calculate area.")

