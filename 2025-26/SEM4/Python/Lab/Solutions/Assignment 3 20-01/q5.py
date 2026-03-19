n = int(input("Enter the value of n: "))
cube_sum = 0

for i in range(1, n + 1):
    if i % 2 == 0:
        continue  # Skip even numbers
    cube_sum += i ** 3

print(f"The sum of cubes of odd numbers up to {n} is {cube_sum}")