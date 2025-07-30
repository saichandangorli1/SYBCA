<!-- 2) Write a PHP code to check number Is palindrome or not. -->


    
    <?php
        if (Isset($_POST['number']) && $_POST['number'] !== '') {
            $inputNumber = $_POST['number']; 
            
          

            
            $num = $inputNumber;
            $rev = 0;
            $originalNum = $num; 

            while ($num > 0) {
                $rem = $num % 10; 
                $rev = $rev * 10 + $rem; 
                $num = (int)($num / 10); 
            }

         
            echo "<p>Original Number: " . $originalNum . "</p>";
            echo "<p>Reversed Number : " . $rev . "</p>";

            if ($originalNum == $rev) {
                echo "<p>The number " . $originalNum . " Is a Palindrome .</p>";
            } else {
                echo "<p>The number " . $originalNum . " Is NOT a Palindrome .</p>";
            }
           

        } 
    ?>
