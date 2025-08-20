<?php

define('PI', 3.14);
function calRA($radius) {
    if ($radius <= 0) {
        return "Radius must be greater than 0.";
    }

    $pi = PI;
    $area = $pi * ($radius * $radius);  
    return $area;
}

$radius = 5;

$AR = "calRA";
echo "Area of circle with radius $radius is: " . $AR($radius);
?>
