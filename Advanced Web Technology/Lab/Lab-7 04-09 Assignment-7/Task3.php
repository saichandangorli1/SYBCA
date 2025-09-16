
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $str = $_POST["input_string"];
    $option = $_POST["option"];
    switch ($option) {
        case "1":
            echo "Number of characters: " . strlen($str);
            break;
        case "2":
            echo "Number of words: " . str_word_count($str);
            break;
        case "3":
            echo "Reverse string: " . strrev($str);
            break;
        case "4":
            echo "Each word in uppercase: " . ucwords(strtolower($str));
            break;
        default:
            echo "Invalid option selected.";
    }
}
?>