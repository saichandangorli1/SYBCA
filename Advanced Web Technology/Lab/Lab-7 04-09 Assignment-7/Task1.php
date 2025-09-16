 <?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $password = $_POST["password"];
    $has_upper    = preg_match('/[A-Z]/', $password);
    $has_lower    = preg_match('/[a-z]/', $password);
    $has_digit    = preg_match('/[0-9]/', $password);
    $has_special  = preg_match('/[\W_]/', $password); // Any non-word character or underscore
    $is_long      = strlen($password) >= 8;
    
    if ($has_upper && $has_lower && $has_digit && $has_special && $is_long) {
        echo "Valid";
    } else {
        echo "Invalid<br>";
        if (!$has_upper)   echo "Password must contain at least one uppercase letter.<br>";
        if (!$has_lower)   echo "Password must contain at least one lowercase letter.<br>";
        if (!$has_digit)   echo "Password must contain at least one digit.<br>";
        if (!$has_special) echo "Password must contain at least one special symbol.<br>";
        if (!$is_long)     echo "Password must be at least 8 characters long.<br>";
    }
}
?>
