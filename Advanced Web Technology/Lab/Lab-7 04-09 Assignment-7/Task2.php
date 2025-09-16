 <?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $str = $_POST["input_string"];
    if ($str === strtoupper($str)) {
        // Entire string is uppercase
        echo "Initial string is Uppercase<br>";
        echo "Converted to Lowercase: " . strtolower($str);
    } elseif ($str === strtolower($str)) {
        // Entire string is lowercase
        echo "Initial string is Lowercase<br>";
        echo "Converted to Uppercase: " . strtoupper($str);
    } else {
        // Mixed case
        echo "String is neither fully uppercase nor lowercase.";
    }
}
?>
