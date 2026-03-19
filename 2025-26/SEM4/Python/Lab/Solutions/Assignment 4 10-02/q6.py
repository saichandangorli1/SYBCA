# 6.Write a Python program to find the largest and smallest elements in a list using if conditions.

lst = [1,2,33,4,5,7]
max = lst[0]

for i in lst:
    if i > max:
        max = i
        
        
print(max)