# Write a function that takes a number and returns True if it is prime, otherwise False. Print the result.

def is_prime(num):
    if num <= 1:
        return False
    count = 0
    for i in range(2, num):
        if num % i == 0:
            count += 1
        
    if count == 0:
        return True
    else:
        return False
    
number = 17
if is_prime(number):
    print(f"{number} is a prime number.")
else:
    print(f"{number} is not a prime number.")