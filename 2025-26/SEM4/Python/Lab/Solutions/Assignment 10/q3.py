# 3. Write a program to demonstrate:
# • Instance method
# • Class method
# • Static method
# Use a class BankAccount with:
# • Instance method → deposit/withdraw
# • Class method → change interest rate
# • Static method → validate account number

class BankAccount:
    interest_rate = 0.05  # Class variable to store the interest rate

    def __init__(self, account_number, balance=0):
        self.account_number = account_number  # Instance variable for account number
        self.balance = balance  # Instance variable for account balance

    def deposit(self, amount):
        """Instance method to deposit money into the account."""
        if amount > 0:
            self.balance += amount
            print(f"Deposited {amount}. New balance: {self.balance}")
        else:
            print("Deposit amount must be positive.")

    def withdraw(self, amount):
        """Instance method to withdraw money from the account."""
        if amount > 0 and amount <= self.balance:
            self.balance -= amount
            print(f"Withdrew {amount}. New balance: {self.balance}")
        else:
            print("Invalid withdrawal amount or insufficient funds.")

    @classmethod
    def change_interest_rate(cls, new_rate):
        """Class method to change the interest rate."""
        cls.interest_rate = new_rate
        print(f"Interest rate changed to: {cls.interest_rate}")

    @staticmethod
    def validate_account_number(account_number):
        """Static method to validate the account number format."""
        if isinstance(account_number, str) and len(account_number) == 10 and account_number.isdigit():
            return True
        return False
    
# Example usage:
account = BankAccount("1234567890", 1000)  # Create a bank account with a valid account number and initial balance
account.deposit(500)  # Deposit money into the account
account.withdraw(200)  # Withdraw money from the account
BankAccount.change_interest_rate(0.03)  # Change the interest rate using the class method
is_valid = BankAccount.validate_account_number("1234567890")  # Validate the account
print(f"Is the account number valid? {is_valid}")  # Output: Is the account number valid? True
is_valid = BankAccount.validate_account_number("12345")  # Validate an invalid account number

print(f"Is the account number valid? {is_valid}")  # Output: Is the account number valid? False

