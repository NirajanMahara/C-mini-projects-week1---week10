// Copying Files from source to destiny

#include<stdio.h>

void main () {
    FILE *fptr1 = fopen("source.txt", "r");
    FILE *fptr2 = fopen("destiny.txt", "w");
    char ch;
    ch = fgetc(fptr1);

    while(ch != EOF) {
        fputc(ch, fptr2);
        ch = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
}