n = int(input("Enter the value of N: "))
total_sum = 0

for i in range(1, n + 1):
    total_sum += i

print(f"The sum of the first {n} natural numbers is {total_sum}")