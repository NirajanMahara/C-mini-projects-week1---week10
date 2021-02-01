// WAP to input a character from the user and print it in uppercase.
// If the character is in lowercase then you have to change it in uppercase and 
// if it is in uppercase then you have to print as it is.
// differece is 32, -32 in every alphabet will get its respective uppercase alphabets

#include <stdio.h>

void main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch>=97 && ch<=122){
        ch =ch-32;
    }
    printf("%c\n", ch);
}