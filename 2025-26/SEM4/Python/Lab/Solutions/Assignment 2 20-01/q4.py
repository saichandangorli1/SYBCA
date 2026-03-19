# # 3.	Using for loop Write a Python program to compute the factorial of a given number using a for loop
num = int(input("Enter a number to compute its factorial: "))
factorial = 1
for i in range(1, num +1):
    factorial *= i
print("The factorial of", num, "is", factorial)
