# Write a function to calculate simple interest where rate has a default value of 5%. Return the result and print it.

def cal(p, t, r=5):
    return (p * t * r) / 100
principal = 1000
time = 2
interest = cal(principal, time)
print("Simple Interest is:", interest)
