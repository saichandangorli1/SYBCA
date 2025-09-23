<?php

class FindMax{

    public $num1;
    public $num2;
    public $num3;
    public $MAX;
    public $MIN;

    function findmaxmin($num1,$num2,$num3){
        $this->num1 = $num1;
        $this->num2 = $num2;
        $this->num3 = $num3;

        if($this->num1 > $this->num2 && $this->num1 > $this->num3){
            $this->MAX = $this->num1;
        }
        else if($this->num2 > $this->num1 && $this->num2 > $this->num3){
            $this->MAX = $this->num2;
        }
        else if($this->num3 > $this->num1 && $this->num3 > $this->num2){
            $this->MAX = $this->num3;
        }
        else{
            $this->MAX = "all numbers are MAX";
        }

           if($this->num1 <$this->num2 && $this->num1 < $this->num3){
            $this->MIN = $this->num1;
        }
        else if($this->num2 < $this->num1 && $this->num2 < $this->num3){
            $this->MIN = $this->num2;
        }
        else if($this->num3 < $this->num1 && $this->num3 < $this->num2){
            $this->MIN = $this->num3;
        }
        else{
            $this->MIN = "all numbers are MIN";
        }
    }

    function display(){
        echo "Number 1: " . $this->num1 . "<br>";
        echo "Number 2: " . $this->num2 . "<br>";
        echo "Number 3: " . $this->num3 . "<br>";
        echo "Maximum: " . $this->MAX . "<br>";
        echo "Minimum: " . $this->MIN . "<br>";
    }
}

$fm = new findMax();
$fm->findmaxmin($_POST['num1'], $_POST['num2'], $_POST['num3']);
$fm->display();

?>