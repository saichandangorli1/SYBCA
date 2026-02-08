# # 5.Using while loop and if condition
# # Write a Python program to check whether a given number is an Armstrong number using a while loop.

n = int(input("Enter a number: "))
on = n
sum = 0
while n > 0:
    digit = n % 10
    sum += digit *digit * digit
    n = n // 10
if on == sum:
    print(on, "is an Armstrong number")
else:
    print(on, "is not an Armstrong number")
