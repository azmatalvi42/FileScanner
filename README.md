# FileScanner
File scraper designed to count words given user inputted text files in C.

run using 
$gcc -Werror -Wall -g -std=gnu99 word_count.c -o word_count
$ ./word_count

OUTPUT:
This program counts the number of lines and words in a file.
Enter f for entering file name, q to quit: 
f
Enter file name: 
input2.txt
Content of input2.txt: 
We will buy very pretty things
A-walking through the faubourgs.
Violets are blue, roses are red,
Violets are blue, I love my loves.

Number of lines of file1: 4
Number of words of file1: 23
Average number of words per line: 5.75
Enter f for entering file name, q to quit: 
q
Goodbye
