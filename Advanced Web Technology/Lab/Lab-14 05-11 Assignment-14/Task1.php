<!-- 1.	Create a PHP class called 'Mathematics' with an abstract method 'ArithmeticOperation()'. Create two subclasses, 'Addition' and 'Subtraction', that implement the 'ArithmeticOperation()' method. -->

<?php

abstract class Mathematics{
    abstract public function ArithmeticOperation($a, $b);
}

class Addition extends Mathematics{
    public function ArithmeticOperation($a, $b){
        return $a + $b;
    }
}
class Subtraction extends Mathematics{
    public function ArithmeticOperation($a, $b){
        return $a - $b;
    }
}

$add = new Addition();
$sub = new Subtraction();
echo "Addition of 5 and 3: " . $add->ArithmeticOperation(5, 3) . "<br>";
echo "Subtraction of 5 and 3: " . $sub->ArithmeticOperation(5, 3) . "<br>
\";
?>