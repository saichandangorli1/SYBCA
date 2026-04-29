# 4. Explain and implement Inheritance:
# • Create a base class Vehicle
# • Derived class Car
# Add attributes and methods in both classes and show inheritance working

# Base class Vehicle
class Vehicle:
    def __init__(self, make, model):
        self.make = make  # Attribute for the make of the vehicle
        self.model = model  # Attribute for the model of the vehicle

    def display_info(self):
        return f"Vehicle Make: {self.make}, Model: {self.model}"  # Method to display vehicle information

# Derived class Car
class Car(Vehicle):
    def __init__(self, make, model, year):
        super().__init__(make, model)  # Call the parent class constructor
        self.year = year  # Attribute specific to the Car class

    def display_info(self):
        return f"{self.year} {self.make} {self.model}"  # Override the display_info method to include the year
    
# Create an instance of the Car class
my_car = Car("Toyota", "Corolla", 2020)
# Display information about the car using the method from the Car class
print(my_car.display_info())  # Output: 2020 Toyota Corolla
# Display information about the car using the method from the Vehicle class

print(super(Car, my_car).display_info())  # Output: Vehicle Make: Toyota, Model: Corolla
