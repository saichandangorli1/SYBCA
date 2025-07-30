<!-- Write a PHP code to find sum and average of first n numbers -->
<?php
        if (Isset($_POST['number']) && $_POST['number'] !== '') {
            $inputNumber = $_POST['number']; 
            
          

            
            $total = 0;
            $average = 0;

            for ($i=1; $i <= $inputNumber; $i++) { 
                $total += $i;
            }

            $average = $total / $inputNumber;

         
            echo "<p>Sum : " . $total . "</p>";
            echo "<p>Avergae : " . $average . "</p>";

           

        } 
    ?>