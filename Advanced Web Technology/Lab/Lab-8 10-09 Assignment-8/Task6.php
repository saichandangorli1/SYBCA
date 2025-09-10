<?php

$products = array(
    "Apple" => "$699",
    "Gemini nano" => "$1200",
    "Perplexity Comet" => "$700",
    "Grok" => "$2500",
    "Claude" => "$7500"
);


echo "Select sorting option:\n";
echo "1. Sort by key (ascending)\n";
echo "2. Sort by key (descending)\n";
echo "3. Sort by value (ascending)\n";
echo "4. Sort by value (descending)\n";

$option = 2; 

switch ($option) {
    case 1: 
        ksort($products);
        echo "Sorted by key (ascending):\n";
        break;
    case 2:
        krsort($products);
        echo "Sorted by key (descending):\n";
        break;
    case 3: 
        asort($products);
        echo "Sorted by value (ascending):\n";
        break;
    case 4: 
        arsort($products);
        echo "Sorted by value (descending):\n";
        break;
    default:
        echo "Invalid option!";
        exit();
}

foreach ($products as $name => $price) {
    echo $name . " => " . $price . "\n";
}
?>
