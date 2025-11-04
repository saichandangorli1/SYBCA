<!-- 1.	Write a PHP class called Calculator that has a private property called result. Implement methods to perform basic arithmetic operations like addition, subtraction, multiplication and division. -->

<?php
class Calculator {
    private $num1;
    private $num2;

    public function __construct($num1, $num2) {
        $this->num1 = $num1;
        $this->num2 = $num2;
    }

    public function add() {
        return $this->num1 + $this->num2;
    }

    public function subtract() {
        return $this->num1 - $this->num2;
    }

    public function multiply() {
        return $this->num1 * $this->num2;
    }

    public function divide() {
        if ($this->num2 != 0) {
            return $this->num1 / $this->num2;
        } else {
            return "Error: Division by zero.";
        }
    }
}


$calc = new Calculator(12, 6);
echo $calc->add(); 
// echo $calc->subtract(); 
// echo $calc->multiply(); 
// echo $calc->divide(); 
?>
