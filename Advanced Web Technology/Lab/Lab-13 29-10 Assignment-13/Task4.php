<!-- 4.	Write a class called 'Employee' that extends the 'Person' class and adds properties like 'salary' and 'position'. Implement methods to display employee details -->

<?php
class Person {
    public $name;
    public $age;

    public function setName($name) {
        $this->name = $name;
    }

    public function setAge($age) {
        $this->age = $age;
    }

    public function getInfo() {
        return "Name: " . $this->name . ", Age: " . $this->age;
    }
}
class Employee extends Person {
    public $salary;
    public $position;

    public function set($position,$salary) {
        parent::setName("om mahadik");
        parent::setAge(30);
        $this->position = $position;
        $this->salary = $salary;
    }

    public function getInfo() {

       echo parent::getInfo() . ", Position: " . $this->position . ", Salary: $" . $this->salary;

    }
}

$employee = new Employee();
$employee->setPosition("Software Engineer");
$employee->setSalary(80000);
?>