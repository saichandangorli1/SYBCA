# 3. Write a Python program to copy elements from a list into a tuple using a loop.

source_list = [1, 2, 3, 4, 5]
result_tuple = ()

for item in source_list:
    # Tuples are immutable, so we concatenate a new tuple each time
    result_tuple = result_tuple + (item,)

print("Source List:", source_list)
print("Result Tuple:", result_tuple)

# Output:
# Source List: [1, 2, 3, 4, 5]
# Result Tuple: (1, 2, 3, 4, 5)
