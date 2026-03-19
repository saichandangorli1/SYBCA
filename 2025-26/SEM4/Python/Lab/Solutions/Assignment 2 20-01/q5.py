
# # 4.	Using if–elif–else statement Write a Python program to calculate Simple Interest, where different interest rates are applied using if–elif–else based on the time period.
p = float(input("Enter the principal amount: "))
r = float(input("Enter the rate of interest: "))
t = float(input("Enter the time period in years: "))
if t <= 1:
    interest_rate = r
elif 1 < t <= 3:
    interest_rate = r + 2.4
else:
    interest_rate = r + 5.6
simple_interest = (p * interest_rate * t) / 100
print("The Simple Interest is:", simple_interest)
