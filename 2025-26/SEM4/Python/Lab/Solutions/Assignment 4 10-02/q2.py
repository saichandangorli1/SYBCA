# 2. Write a Python program to count the number of even and odd elements in a given list.

lst = [1,2,33,4,5,7]
even = 0
odd = 0

for i in lst:
    if i %2==0:
        even += 1
    else:
        odd+=1
        
print(even)
print(odd)