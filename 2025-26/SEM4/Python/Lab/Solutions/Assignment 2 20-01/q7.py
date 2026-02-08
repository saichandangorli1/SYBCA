
# # 7.	Using for loop and range() function
# # Write a Python program to print all prime numbers within a given interval using a for loop and range().

a = int(input("Enter the starting number of the interval: "))
b = int(input("Enter the ending number of the interval: "))
count = 0
for i in range(a, b + 1):
    if i > 1:
        for j in range(2,i+1):
            print("divi",i%j)
            if i % j == 0:
                count += 1
                print("count:", count)
        if count == 1:
            print(i, "is a prime number")
            count = 0
            print("count:", count)
        else:
         print(i, "is not a prime number")
         count = 0
    