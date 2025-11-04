<!-- 4.	Write a PHP code to find simple interest using constructor and destructor concept. -->


<?php
class SimpleInterest {
    private $principal;
    private $rate;
    private $time;

    public function __construct($principal, $rate, $time) {
        $this->principal = $principal;
        $this->rate = $rate;
        $this->time = $time;
    }

    public function __destruct() {
        $si = ($this->principal * $this->rate * $this->time) / 100;
        echo "Principal: {$this->principal}\n";
        echo "Rate: {$this->rate}\n";
        echo "Time: {$this->time}\n";
        echo "Simple Interest: $si\n";
    }
}


$calc = new SimpleInterest(8000, 6, 3);
?>
