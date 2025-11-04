<!-- 2.	Write a PHP class called File with properties like filename and size. Implement a static method to calculate the total size of multiple files. -->


<?php














// class File {
//     public $filename;
//     public $size;

//     public function __construct($filename, $size) {
//         $this->filename = $filename;
//         $this->size = $size; 
//     }

//     public static function calculateTotalSize($files) {
//         $totalSize = 0;
//         foreach ($files as $file) {
//             if ($file instanceof File) {
//                 $totalSize += $file->size;
//             }
//         }
//         return $totalSize;
//     }
// }


// $file1 = new File("file1.txt", 1000);
// $file2 = new File("file2.txt", 2000);
// $file3 = new File("file3.txt", 1500);

// $files = [$file1, $file2, $file3];
// $totalSize = File::calculateTotalSize($files);

// echo "Total size of files: " . $totalSize . " bytes";
?>
