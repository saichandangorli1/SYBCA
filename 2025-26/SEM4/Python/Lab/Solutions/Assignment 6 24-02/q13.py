# Write a function that takes three numbers and returns the largest number.

def findLargest(num1, num2, num3):
    if num1 >= num2 and num1 >= num3:
        return num1
    elif num2 >= num1 and num2 >= num3:
        return num2
    else:
        return num3
    
n1 = 10
n2 = 20
n3 = 15
largest = findLargest(n1, n2, n3)
print("The largest number is:", largest)

# output: The largest number is: 20