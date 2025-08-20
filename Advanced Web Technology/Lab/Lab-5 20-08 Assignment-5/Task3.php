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

$radius = 5;
echo "Area of circle with radius $radius is: " . calculateCircleArea($radius);
?>
