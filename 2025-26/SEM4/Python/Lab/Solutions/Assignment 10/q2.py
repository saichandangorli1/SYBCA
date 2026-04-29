# 2. Demonstrate class variables and instance variables:
# • Create a class Employee
# • Class variable: company_name
# • Instance variables: name, salary
# Show how class variable is shared and instance variable is unique.

class Employee:
    company_name = "Tech Solutions"  # Class variable shared by all instances

    def __init__(self, name, salary):
        self.name = name  # Instance variable unique to each instance
        self.salary = salary  # Instance variable unique to each instance

# Create instances of the Employee class
emp1 = Employee("Alice", 50000)
emp2 = Employee("Bob", 60000)
emp3 = Employee("Charlie", 70000)

# Display class variable (shared by all instances)
print(f"Company Name: {Employee.company_name}")

# Display instance variables (unique to each instance)
print(f"Employee 1 - Name: {emp1.name}, Salary: {emp1.salary}")
print(f"Employee 2 - Name: {emp2.name}, Salary: {emp2.salary}")
print(f"Employee 3 - Name: {emp3.name}, Salary: {emp3.salary}")
# Output:
# Company Name: Tech Solutions
# Employee 1 - Name: Alice, Salary: 50000
# Employee 2 - Name: Bob, Salary: 60000
# Employee 3 - Name: Charlie, Salary: 70000

