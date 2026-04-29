# 5. Write a program using Multilevel Inheritance:
# • Class Person → Employee → Manager
# Display all inherited properties.

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display_person_info(self):
        print(f"Name: {self.name}, Age: {self.age}")
        
class Employee(Person):
    def __init__(self, name, age, employee_id):
        super().__init__(name, age)  # Call the constructor of the Person class
        self.employee_id = employee_id

    def display_employee_info(self):
        self.display_person_info()  # Display person info from the Person class
        print(f"Employee ID: {self.employee_id}")
        
class Manager(Employee):
    def __init__(self, name, age, employee_id, department):
        super().__init__(name, age, employee_id)  # Call the constructor of the Employee class
        self.department = department

    def display_manager_info(self):
        self.display_employee_info()  # Display employee info from the Employee class
        print(f"Department: {self.department}")
# Create an instance of the Manager class
manager = Manager("Alice", 35, "E123", "Sales")
# Display all inherited properties using the method from the Manager class
manager.display_manager_info()

# Output:
# Name: Alice, Age: 35
# Employee ID: E123
# Department: Sales

