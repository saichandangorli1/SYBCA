<!-- 2)	Write a PHP program to check string is palindrome or not. using strrev and strcmp function -->
 
<?php
function isPalindrome($str) {
    $cleanedStr = strtolower(str_replace(' ', '', $str));
    
    $reversedStr = strrev($cleanedStr);
    
    if (strcmp($cleanedStr, $reversedStr) == 0) {
        return true; 
    } else {
        return false; 
    }
}

$str = "racecar";
echo $str;
echo isPalindrome($str) ? " Palindrome" : " Not a Palindrome";
?>
