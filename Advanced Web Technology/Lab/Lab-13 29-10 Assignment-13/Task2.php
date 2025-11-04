<!-- 2.	Write a PHP a class called "BankAccount" with properties like "accountNumber" and "balance". Implement methods to deposit and withdraw money from the account-->

<?php
class BankAccount {
    public $accountNumber;
    public $balance = 0;

    public function setAccountNumber($accountNumber) {
        $this->accountNumber = $accountNumber;
    }

    public function deposit($amount) {
        if ($amount > 0) {
            $this->balance += $amount;
            echo "Deposited: $" . $amount . "\n";
        } else {
            echo "Deposit amount must be positive.\n";
        }
    }

    public function withdraw($amount) {
        if ($amount > 0 && $amount <= $this->balance) {
            $this->balance -= $amount;
            echo "Withdrew: $" . $amount . "\n";
        } else {
            echo "Insufficient balance or invalid withdrawal amount.\n";
        }
    }

    public function getBalance() {
        return $this->balance;
    }
}

$account = new BankAccount();
$account->setAccountNumber("123456789");
$account->deposit(500);
$account->withdraw(200);
echo "Current Balance: $" . $account->getBalance() . "\n";

?>