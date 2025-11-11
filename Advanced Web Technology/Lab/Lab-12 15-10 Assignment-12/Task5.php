<!-- 5.	Create a base class LibraryItem with title and author. Create subclass Book, with specific methods as getDueDate() and getDuration(). -->

<?php
class LibraryItem {
    protected $title;
    protected $author;

    public function set($title, $author) {
        $this->title = $title;
        $this->author = $author;
    }
    public function getTitle() {
        return $this->title;
    }
    public function getAuthor() {
        return $this->author;
    }
}
class Book extends LibraryItem {
    protected $duration; // in days

    public function setDuration($days) {
        $this->duration = $days;
    }

    public function getDuration() {
        return $this->duration;
    }

    public function getDueDate() {
        $dueDate = new DateTime();
        $dueDate->modify('+' . $this->duration . ' days');
        return $dueDate->format('Y-m-d');
    }
}
// Example usage:
$book = new Book();
$book->set("1984", "George Orwell");
$book->setDuration(14); // 14 days loan period
echo "Book Title: " . $book->getTitle() . "\n";
echo "Author: " . $book->getAuthor() . "\n";
echo "Loan Duration: " . $book->getDuration() . " days\n";
echo "Due Date: " . $book->getDueDate() . "\n";
?>
