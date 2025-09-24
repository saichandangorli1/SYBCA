

<?php
class Vehicle {
    public $companyName;
    public $vehicleName;
    public $price;

    function set($companyName, $vehicleName, $price) {
        $this->companyName = $companyName;
        $this->vehicleName = $vehicleName;
        $this->price = $price;
    }

    public function displayDetails() {
        echo "Company Name: " . $this->companyName . "\n";
        echo "Vehicle Name: " . $this->vehicleName . "\n";
        echo "Price: $" . $this->price . "\n";
    }
}

$vehicle = new Vehicle();
$vehicle->set("Toyota", "Camry", 24000);
$vehicle->displayDetails();
?>