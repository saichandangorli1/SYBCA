

<?php
class BankAccount {
    public $accountNumber;
    public $accountHolderName;
    public $balance;

    function set($accountNumber, $accountHolderName, $initialBalance = 0) {
        $this->accountNumber = $accountNumber;
        $this->accountHolderName = $accountHolderName;
        $this->balance = $initialBalance;
    }

    function deposit($amount) {
        if ($amount > 0) {
            $this->balance += $amount;
            echo "Deposited: $" . $amount . "\n";
        } else {
            echo "Deposit amount must be positive.\n";
        }
    }

    function withdraw($amount) {
        if ($amount > 0 && $amount <= $this->balance) {
            $this->balance -= $amount;
            echo "Withdrew: $" . $amount . "\n";
        } else {
            echo "Insufficient balance or invalid withdrawal amount.\n";
        }
    }

    function displayDetails() {
        echo "Account Number: " . $this->accountNumber . "\n";
        echo "Account Holder Name: " . $this->accountHolderName . "\n";
        echo "Balance: $" . $this->balance . "\n";
    }
}

$account = new BankAccount();
$account->set("1552746", "Saichandan Gorli", 1000);
$account->displayDetails();
$account->deposit(500);
$account->withdraw(200);
$account->displayDetails();
?>