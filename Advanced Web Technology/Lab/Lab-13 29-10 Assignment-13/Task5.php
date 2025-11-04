<!-- 5.	Write a PHP class called 'Shape' with an abstract method 'calculateArea()'. Create two subclasses, 'Triangle' and 'Rectangle', that implement the 'calculateArea()' method.-->

<?php
abstract class Shape {
    abstract public function calculateArea();
}

class Triangle extends Shape {
    public $base;
    public $height;

    public function setDimensions($base, $height) {
        $this->base = $base;
        $this->height = $height;
    }

    public function calculateArea() {
        return 0.5 * $this->base * $this->height;
    }
}
class Rectangle extends Shape {
    public $length;
    public $width;

    public function setDimensions($length, $width) {
        $this->length = $length;
        $this->width = $width;
    }

    public function calculateArea() {
        return $this->length * $this->width;
    }
}
$triangle = new Triangle();
$triangle->setDimensions(10, 5);
echo "Triangle Area: " . $triangle->calculateArea() . "\n";
$rectangle = new Rectangle();
$rectangle->setDimensions(8, 4);
echo "Rectangle Area: " . $rectangle->calculateArea() . "\n";
?>