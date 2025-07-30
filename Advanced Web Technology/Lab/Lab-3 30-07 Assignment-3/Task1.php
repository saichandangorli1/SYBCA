<!-- 1) Write a PHP code to accept a number and choice from user and perform following operations.
	i. Check number is positive or negative
	ii. Check number is even or odd
	iii. Find square
	iv. Find cube
 -->


    <?php

        if (isset($_POST['number']) && isset($_POST['choice'])) {
            $number = (int)$_POST['number'];
            $choice = $_POST['choice'];
            $output = "";

            echo "<div class='result'>";
            echo "<h3>Result:</h3>";

            switch ($choice) {
                case '1':
                    if ($number > 0) {
                        $output = "The number $number is Positive.";
                    } elseif ($number < 0) {
                        $output = "The number $number is Negative.";
                    } else {
                        $output = "The number $number is Zero.";
                    }
                    break;
                case '2':
                    if ($number % 2 == 0) {
                        $output = "The number $number is Even.";
                    } else {
                        $output = "The number $number is Odd.";
                    }
                    break;
                case '3':
                    $square = $number * $number;
                    $output = "The square of $number is $square.";
                    break;
                case '4':
                    $cube = $number * $number * $number;
                    $output = "The cube of $number is $cube.";
                    break;
                default:
                    $output = "<span class='error'>Invalid selection. Please go back and choose a valid operation.</span>";
                    break;
            }
            echo "<p>$output</p>";
            echo "</div>";
        } else {
            echo "<div class='result'><p class='error'>Please enter a number and choose an operation from the previous page.</p></div>";
        }
   
    ?>