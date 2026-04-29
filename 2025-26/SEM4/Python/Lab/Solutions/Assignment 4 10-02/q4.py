# 4. Write a Python program to print only odd elements from a list using continue.

lst = [1,2,33,4,5,7]

for i in lst:
    if i %2==0:
        continue
    print(i)
    
    
    # Output:
    # 1 
    # 33
    # 5
    # 7
        