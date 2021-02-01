// Write a structure to store the names, salary and hours of work per day of 5
// employees in a company. Write a program to increase the salary depending on
// the number of hours of work per day as follows and then print the name of all the
// employees along with their final salaries.
// Hours of work per day     8      10        >=12
// Increase in salary       $50     $100      $150
#include<stdio.h>

struct employee
{
    char name[20];
    float salary;
    int hours;
};

void main() {
    struct employee e[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        fflush(stdin);
        scanf("%s",e[i].name);
        scanf("%f", &e[i].salary);
        scanf("%d", &e[i].hours);
    }

    for (i = 0; i < 5; i++)
    {
        if (e[i].hours == 8) {
            e[i].salary = e[i].salary + 50;
        }
        else if (e[i].hours == 10) {
            e[i].salary = e[i].salary + 100; 
        }
        else if (e[i].hours >= 12) {
            e[i].salary = e[i].salary + 150;
        }
        printf("%s %f\n", e[i].name, e[i].salary);
    }
}
