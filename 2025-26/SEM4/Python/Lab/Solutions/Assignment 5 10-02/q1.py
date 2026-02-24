# 1. Write a Python program to find the count and index of a given element in a tuple using count() and index() methods.

my_tuple = (1, 5, 7, 5, 9, 5, 10)
element = 5

c = my_tuple.count(element)

i = my_tuple.index(element)

print("Tuple:", my_tuple)
print("Element:", element)
print("Count:", c)
print("Index:", i)