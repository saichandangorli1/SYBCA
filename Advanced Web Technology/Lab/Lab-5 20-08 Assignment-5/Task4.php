<?php
    $n = 5;
function calculateSumAndProduct($n) {
    if ($n <= 0) {
        return "Number must be greater than 0.";
    }

    $sum = 0;
    $product = 1;

    for ($i = 1; $i <= $n; $i++) {
        $sum += $i;       
        $product *= $i;    
    }

    echo "For first $n numbers:<br>";
    echo "Summation = " . $sum . "<br>";
    echo "Product = " . $product . "<br>";

}

calculateSumAndProduct($n);

?>
