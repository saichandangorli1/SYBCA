# 4. Write a Python program to reverse a list using a while loop (without using built-in reverse functions).

original_list = [10, 20, 30, 40, 50]
reversed_list = []

index = len(original_list) - 1

while index >= 0:
    reversed_list.append(original_list[index])
    index = index - 1

print("Original List:", original_list)
print("Reversed List:", reversed_list)

# Output:
# Original List: [10, 20, 30, 40, 50]
# Reversed List: [50, 40, 30, 20, 10]
