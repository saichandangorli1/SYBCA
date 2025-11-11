<!-- 4.	Create a base class Product with protected properties name and price.Create a child class DiscountedProduct that adds a method getDiscountedPrice($discountPercentage). -->

<?php
class Product {
    protected $name;
    protected $price;

    public function set($name, $price) {
        $this->name = $name;
        $this->price = $price;
    }
    public function getName() {
        return $this->name;
    }
    public function getPrice() {
        return $this->price;
    }
}
class DiscountedProduct extends Product {
    public function getDiscountedPrice($discountPercentage) {
        $discountAmount = ($this->price * $discountPercentage) / 100;
        return $this->price - $discountAmount;
    }
}
// Example usage:
$product = new DiscountedProduct();
$product->set("Laptop", 1000);
echo "Product Name: " . $product->getName() . "\n";
echo "Original Price: $" . $product->getPrice() . "\n";
$discountedPrice = $product->getDiscountedPrice(15); // 15%
echo "Discounted Price: $" . $discountedPrice . "\n";
?>
