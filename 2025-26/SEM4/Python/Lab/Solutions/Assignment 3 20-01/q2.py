num = int(input("Enter a number: "))

a = 0
b = 1

# Generate Fibonacci numbers as long as 'a' is less than the input number
while a < num:
    c = a + b
    a = b
    b = c

# After the loop, check if 'a' equals the input number
if a == num:
    print(f"{num} is a Fibonacci number")
else:
    print(f"{num} is not a Fibonacci number")