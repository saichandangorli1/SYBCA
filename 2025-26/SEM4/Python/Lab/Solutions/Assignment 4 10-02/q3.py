# 3.Write a Python program to search an element in a list and terminate the loop using break when the element is found.

lst = [1,2,33,4,5,7]
key = int(input("enter a key :"))

for i in lst:
    if key == i:
        print("key found")
        break
    
# Output:
# enter a key :33
# key found
