<!-- 2.	Create a base class Vehicle with properties brand and color, and a method displayInfo(). Derive a class Car that adds a property model and overrides the displayInfo() method to include the model name. -->

<?php
class Vehicle {
    public $brand;
    public $color;

    public function setDetails($brand, $color) {
        $this->brand = $brand;
        $this->color = $color;
    }

    public function displayInfo() {
        echo "Brand: " . $this->brand . "\n";
        echo "Color: " . $this->color . "\n";
    }
}
class Car extends Vehicle {
    public $model;

    public function setModel($model) {
        $this->model = $model;
    }

    public function displayInfo() {
        parent::displayInfo();
        echo "Model: " . $this->model . "\n";
    }
}
$car = new Car();
$car->setDetails("Toyota", "Red");
$car->setModel("Corolla");
$car->displayInfo();
?>