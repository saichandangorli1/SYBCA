<!-- 3.	Create a PHP constructor to set employee name, designation, basic salary, allowances amount and deduction amount. Display gross salary and net salary using destructor. -->


<?php
class Employee {
    private $name;
    private $designation;
    private $basicSalary;
    private $allowances;
    private $deductions;

    public function __construct($name, $designation, $basicSalary, $allowances, $deductions) {
        $this->name = $name;
        $this->designation = $designation;
        $this->basicSalary = $basicSalary;
        $this->allowances = $allowances;
        $this->deductions = $deductions;
    }

    public function __destruct() {
        $grossSalary = $this->basicSalary + $this->allowances;
        $netSalary = $grossSalary - $this->deductions;
        echo "Employee Name: {$this->name}\n";
        echo "Designation: {$this->designation}\n";
        echo "Gross Salary: {$grossSalary}\n";
        echo "Net Salary: {$netSalary}\n";
    }
}

$emp = new Employee("Saichandan", "Software Engineer", 40000000000, 100000000, 50000);
?>
