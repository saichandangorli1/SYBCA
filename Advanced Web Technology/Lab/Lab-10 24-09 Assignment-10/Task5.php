
<?php
class Product {
    public $productName;
    public $quantity;
    public $pricePerUnit;

    function set($productName, $quantity, $pricePerUnit) {
        $this->productName = $productName;
        $this->quantity = $quantity;
        $this->pricePerUnit = $pricePerUnit;
    }

    function displayDetails() {
        $totalAmount = $this->quantity * $this->pricePerUnit;

        echo "Product Name: " . $this->productName . "\n";
        echo "Quantity: " . $this->quantity . "\n";
        echo "Price per Unit: $" . $this->pricePerUnit . "\n";
        echo "Total Amount: $" . $totalAmount . "\n";
    }
}

$product = new Product();
$product->set("Pixel", 3, 80000);
$product->displayDetails();
?>