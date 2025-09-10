<!-- 1)	Write a PHP recursive function to find summation of first n numbers.  -->
<?php
function sumOfNumbers($n) {
    if ($n == 1) {
        return 1;
    } else {
        return $n + sumOfNumbers($n - 1);
    }
}

echo sumOfNumbers(5);
?>
