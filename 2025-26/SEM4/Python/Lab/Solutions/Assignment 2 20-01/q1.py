# # 1. wapp to add two numbers only if both numbers are positive integers.153

a= int(input("Enter first number: "))
b= int(input("Enter second number: "))
if a>0 and b>0:
    print("Sum is:", a+b)
else:
    print("Both numbers must be positive integers.")
    
    