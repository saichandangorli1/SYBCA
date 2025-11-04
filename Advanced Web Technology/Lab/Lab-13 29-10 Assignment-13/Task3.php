<!-- 3.	Write a PHP a class hierarchy for a library system, including classes like 'LibraryItem', 'Book', 'DVD', etc. Implement appropriate properties and methods for each class. without usign construct-->


<?php
class LibraryItem {
    public $title;
    public $author;
    public $publicationYear;

    public function setTitle($title) {
        $this->title = $title;
    }

    public function setAuthor($author) {
        $this->author = $author;
    }

    public function setPublicationYear($year) {
        $this->publicationYear = $year;
    }

    public function getInfo() {
        return "Title: " . $this->title . ", Author: " . $this->author . ", Year: " . $this->publicationYear;
    }
}
class Book extends LibraryItem {
    public $genre;

    public function setGenre($genre) {
        $this->genre = $genre;
    }

    public function getInfo() {
        return parent::getInfo() . ", Genre: " . $this->genre;
    }
}

class DVD extends LibraryItem {
    public $duration;

    public function setDuration($duration) {
        $this->duration = $duration;
    }

    public function getInfo() {
        return parent::getInfo() . ", Duration: " . $this->duration . " mins";
    }
}
$book = new Book();
$book->setTitle("The Great Gatsby");
$book->setAuthor("F. Scott Fitzgerald");
$book->setPublicationYear(1925);
$book->setGenre("Fiction");
echo "Book Info: " . $book->getInfo() . "\n";
$dvd = new DVD();
$dvd->setTitle("Inception");
$dvd->setAuthor("Christopher Nolan");
$dvd->setPublicationYear(2010);
$dvd->setDuration(148);
echo "DVD Info: " . $dvd->getInfo() . "\n";

?>