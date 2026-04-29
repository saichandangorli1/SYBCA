# Write a function that asks the user to enter a number and prints its factorial inside the function.

def factorial():
    num = int(input("Enter a number to find its factorial: "))
    fact = 1
    for i in range(1, num + 1):
        fact *= i
    print(f"The factorial of {num} is: {fact}")
    
    
factorial()

    # output: If the user enters 5, the output will be: The factorial of 5 is: 120
    