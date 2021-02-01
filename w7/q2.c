// Write a program that copies the content of one file to another. While
// copying you have to change every alphabet character read in to the
// character next to the alphabet. For example 'A' will change into 'B', 'B' into 'C'
// and so on. When you get to 'Z', wrap around and change it to 'A'.
// It should work for both small and capital letters.
// Conversion should be done for only alphabets.
#include<stdio.h>

void main () {
    FILE *fptr1 = fopen("source.txt", "r");
    FILE *fptr2 = fopen("destiny.txt", "w");
    char ch;        // 1st data initiazation
    ch = fgetc(fptr1);      // getting 1st character in ch from file pointer fptr1

    while (ch != EOF)       // if not the end of file, continue
    {
        if(ch >= 'A' && ch < 'Z' || ch >= 'a' && ch < 'z') {
            ch = ch + 1;
            fputc(ch, fptr2);
        }
         else if (ch == 'Z')
        {
        ch = 'A';
        fputc(ch, fptr2);
        }
        else if (ch == 'z')
        {
            ch = 'a';
            fputc(ch, fptr2);
        }
        else        // prints as same
        {
            fputc(ch, fptr2);
        }
        ch = fgetc(fptr1);     //iterating in fptr1 characters
    }  
}