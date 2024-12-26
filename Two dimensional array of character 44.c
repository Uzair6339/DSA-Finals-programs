#include <stdio.h>
#include <string.h>

#define FOUND 1
#define NOTFOUND 0

void main()
{
    char masterlist[6][10] = {"Akshay", "Parag", "Raman", "Srinivas", "Gopal", "Rajesh"};
    int i, flag, a;
    char youngman[10];
    
    printf("\nEnter the name: ");
    scanf("%s", youngman); // No need for & with char arrays
    flag = NOTFOUND;
    
    for(i = 0; i < 6; i++) // Use < 6 instead of <= 5 for clarity
    {
        a = strcmp(masterlist[i], youngman); // Corrected typo from strcamp to strcmp
        if(a == 0)
        {
            printf("Welcome, you can enter the palace\n");
            flag = FOUND;
            break;
        }
    }
    
    if(flag == NOTFOUND)
    {
        printf("Sorry, you are a trespasser\n");
    }
}
