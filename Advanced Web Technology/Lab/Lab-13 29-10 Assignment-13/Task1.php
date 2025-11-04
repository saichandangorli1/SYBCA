<!-- 1.	Write a class called 'Math' with static methods like 'add()', 'subtract()', and 'multiply()'. Use these methods to perform mathematical calculations. -->

<?php
class Math {
    public static function add($a, $b) {
        return $a + $b;
    }

    public static function subtract($a, $b) {
        return $a - $b;
    }

    public static function multiply($a, $b) {
        return $a * $b;
    }
}

echo "Addition: " . Math::add(5, 3) . "\n";        
echo "Subtraction: " . Math::subtract(5, 3) . "\n
"; 
echo "Multiplication: " . Math::multiply(5, 3) . "\n";

?>