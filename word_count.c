#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char buffer[100];
    FILE *file;
    char choice = 'f';
    int ch;
    double avgWords;

    printf("This program counts the number of lines and words in a file.\n");
    while (choice != 'q') {
        printf("Enter f for entering file name, q to quit: \n");
        scanf(" %c", &choice);

	while (getchar() != '\n');
	
        if (choice == 'q') {
            printf("Goodbye\n");
            break;
            
        } else if (choice == 'f') {
            printf("Enter file name: \n");
            
            scanf("%s",buffer); 
            file = fopen(buffer, "r");

            if (file == NULL) {
                printf("%s cannot be opened.\n", buffer);
                continue;
            }

            int words = 0, lines = 0;
            int inWord = 0; // Use to track if we are in a word
            	printf("Content of input2.txt: \n");
		while ((ch = fgetc(file)) != EOF) {
		    	if (isprint(ch) || ch == '\n') { // Check if ch is printable or a newline
			putchar(ch); }
		
			if (ch == '\n') {
		            lines++;
		            	
		        }

		        // Check if the character is a part of a word
		        if (ch == ' ' || ch == '\t' || ch == '\n') {
		            inWord = 0; // No longer in a word
		        } else if (!inWord) {
		            inWord = 1; // New word
		            words++;
		        }
		    }
            fclose(file);

            printf("\nNumber of lines of file1: %d\n", lines);
            printf("Number of words of file1: %d\n", words);

            if (lines > 0) {
                avgWords = (double)words / lines;
                printf("Average number of words per line: %.2f\n", avgWords);
            } else {
                printf("Empty File :( \n");
            }
        }
    }
    return avgWords;
}

