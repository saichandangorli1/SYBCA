<<<<<<< HEAD
<!-- Write a PHP program to check string is palindrome or not.  -->

<?php

$str = "Madam";

$str_lower = strtolower($str);
$str_clean = preg_replace('/[^a-z0-9]/', '', $str_lower);

$rev_str = strrev($str_clean);


if($str_clean == $rev_str) {
    echo "$str is a palindrome";
} else {
    echo "$str is not a palindrome";
}
?>

 
=======
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
>>>>>>> f67e526c8daf7b0dae0c244eb1b874fb07dcbbd0
