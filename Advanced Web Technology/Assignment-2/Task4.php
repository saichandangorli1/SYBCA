
<?php
$character = 'A'; 
switch ($character) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        echo "$character is a vowel.";
        break;
    default:
        echo "$character is a consonant.";
        break;
}
?>