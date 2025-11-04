<!-- 5.	Write a PHP code to create constructor to set array elements and destructor to find minimum and maximum value from it. -->
 
<?php
class ArrayMinMax {
    private $elements;

    public function __construct($elements) {
        $this->elements = $elements;
    }

    public function __destruct() {
        if (empty($this->elements)) {
            echo "Array is empty.\n";
            return;
        }

        $min = $this->elements[0];
        $max = $this->elements[0];

        foreach ($this->elements as $value) {
            if ($value < $min) {
                $min = $value;
            }
            if ($value > $max) {
                $max = $value;
            }
        }
        echo "Minimum value in the array: {$min}\n";
        echo "Maximum value in the array: {$max}\n";
    }
}

$arr = [15, 12, 100, 7, 45, 62];
$obj = new ArrayMinMax($arr);
?>
