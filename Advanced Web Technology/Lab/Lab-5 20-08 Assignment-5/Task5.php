<?php

$simpleInterest = function($principal, $rate, $time) {
    return ($principal * $rate * $time) / 100;
};


$P = 10000;  
$R = 5;      
$T = 2;      

echo "Simple Interest = " . $simpleInterest($P, $R, $T);
?>
