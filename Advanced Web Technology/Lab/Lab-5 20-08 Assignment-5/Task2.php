<?php

define('PI', 3.14);
function calculateCircleArea($radius) {
    if ($radius <= 0) {
        return "Radius must be greater than 0.";
    }
    $pi = PI;
    $area = $pi * ($radius * $radius);  
    return $area;
}

$radius = 7;
echo "The area of the circle with radius $radius is: " . calculateCircleArea($radius);
?>
