// Create a structure named Employee having members name,salary and hours of
// work per day. Now, write a program to dynamically create an ‘n’ number of
// structures of type Employee. Pass this array of structure to a function that prints
// the highest salary of the employee.
#include <stdio.h>
#include <stdlib.h>

struct employee
{   
    char name[20];
    float salary;
    int hours;
};

// Array recieving from structure ptr and thecsize of employee 
void abc(struct employee e[], int size) {
    int i;
    float large = e[0].salary;  // initializing  1st element of array salary
    for ( i = 0; i < size; i++)
    {
        if (e[i].salary > large)
        {
            large = e[i].salary;    //if large, then saved to large varaible
        }
    }

    for ( i = 0; i < size; i++)
    {
        if (e[i].salary == large)    // if the large variable container meets with anyones salary then prints
        {
            printf("%s %f %d\n", e[i].name, e[i].salary, e[i].hours);
        }
        
    }
    
    

}

void main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);        // The below logic of type casting to struct datatype of variable is important
    struct employee* ptr = (struct employee*) malloc(n*sizeof(struct employee));
    
    // User input to field till n number of employee
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        scanf("%s", ptr[i].name);
        scanf("%f", &ptr[i].salary);
        scanf("%d", &ptr[i].hours);
    }
    abc(ptr, n);        // ptr is array of structure type, so in function abc, receiver is structure array
}
