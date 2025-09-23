<?php
class Add{
    public $num1;
    public $num2;
    public $sum;

    function __construct($num1, $num2){
        $this->num1 = $num1;
        $this->num2 = $num2;
        $this->sum = $num1 + $num2;
    }

    function __destruct(){
        echo "Number 1: " . $this->num1 . "<br>";
        echo "Number 2: " . $this->num2 . "<br>";
        echo "Sum: " . $this->sum . "<br>";
    }
}

$add = new Add($_POST['num1'], $_POST['num2']);


?>