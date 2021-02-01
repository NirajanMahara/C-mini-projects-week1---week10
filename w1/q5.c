// WAP to make changes in program of Qno 4.
// Ask character from the user until an enter key is pressed.
// The ASCII(American Standard Code for Information Interchage) is a character encoding standard.
// The ASCII value for Enter key is 13.
#include<stdio.h>

void main(){
    char ch;
    printf("Enter a Character: ");

    do{
        ch = getche();  //continuosly take charactervalue and  display, 1 run compulsory
        if(ch>=97 && ch<=122){ //these are the small aphabets ASCII
            ch = ch - 32;
        }
        printf("%c", ch);
    } while
    (ch != 13); //ASCII for Enter, continue until the Enter is pressed, if enter is pressed , terminates do--while structure.
}
