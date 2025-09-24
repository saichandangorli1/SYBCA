
<?php
class Rectangle {
    public $length;
    public $width;

    function set($length, $width) {
        $this->length = $length;
        $this->width = $width;
    }

    function calculateArea() {
        return $this->length * $this->width;
    }

    function calculatePerimeter() {
        return 2 * ($this->length + $this->width);
    }
}

$rectangle = new Rectangle();
$rectangle->set(5, 10);
echo "Area: " . $rectangle->calculateArea() . "\n";
echo "Perimeter: " . $rectangle->calculatePerimeter() . "\n";
?>