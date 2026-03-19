# 2. Write a Python program to convert a list into a tuple and a tuple into a list.


sample_list = [10, 20, 30]
sample_tuple = ("A", "B", "C")

list_to_tuple = tuple(sample_list)

tuple_to_list = list(sample_tuple)

print("List converted to tuple:", list_to_tuple)
print("Tuple converted to list:", tuple_to_list)