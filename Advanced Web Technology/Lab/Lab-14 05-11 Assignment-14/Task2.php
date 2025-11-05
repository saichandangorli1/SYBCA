<!-- 2.	Create an interface ‘Power’ with two methods square and cube. Create a class ‘RaiseTo’ which implements the interface Power and display square and cube of a number. -->

<?php
interface Power {
    public function square($num);
    public function cube($num);
}

class RaiseTo implements Power {
    public function square($num) {
        return $num * $num;
    }

    public function cube($num) {
        return $num * $num * $num;
    }
}
$raise = new RaiseTo();
$number = 4;
echo "Square of $number: " . $raise->square($number) . "<br>";
echo "Cube of $number: " . $raise->cube($number) . "<br>";
?>