<?php

function calRA($l ,$w) {
    if ($l <= 0 || $w <= 0) {
        return "Length and width must be greater than 0.";
    }
    $area = $l * $w;
    return $area;
}
$l = 10;
$w = 5;
$AR = "calRA";
echo "The area of the rectangle with length $l and width $w is: " . calRA($l, $w);
?>
