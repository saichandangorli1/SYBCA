<!-- 1.	Write a PHP code to create a class Person with name and age as data members. Derived a class Employee with salary and designation from Person. Implement methods to display Person and Employee details. -->

<?php
class Person {
    public $name;
    public $age;

    public function setDetails($name, $age) {
        $this->name = $name;
        $this->age = $age;
    }

    public function displayPersonDetails() {
        echo "Name: " . $this->name . "\n";
        echo "Age: " . $this->age . "\n";
    }
}
class Employee extends Person {
    public $salary;
    public $designation;

    public function setEmployeeDetails($salary, $designation) {
        $this->salary = $salary;
        $this->designation = $designation;
    }

    public function displayEmployeeDetails() {
        $this->displayPersonDetails();
        echo "Salary: $" . $this->salary . "\n";
        echo "Designation: " . $this->designation . "\n";
    }
}
$employee = new Employee();
$employee->setDetails("Saichandan Gorli", 30);
$employee->setEmployeeDetails(6000000, "Software Engineer");
$employee->displayEmployeeDetails();
?>