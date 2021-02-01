// Write a C program to compare the contents of two files, character by
// character and then output “Identical” if they are both identical, and
// “Different” if they are different.
#include<stdio.h>

void main() {
    FILE *fptr1 = fopen("source.txt", "r");
    FILE *fptr2 = fopen("destiny.txt", "r");
    char ch1, ch2;
    int flag = 1;   // initilized identical, first
    ch1 = fgetc(fptr1); 
    ch2 = fgetc(fptr2);

    while (ch1 != EOF && ch2 != EOF)
    {
        if (ch1 != ch2)
        {
            flag = 0;
            break;
        }
        ch1 = fgetc(fptr1);
        ch2 = fgetc(fptr2);   
    }
    if (flag == 1 && ch1 == ch2)
    {
        printf("Identical\n");
    }
    else
    {
        printf("Different\n");
    }
}