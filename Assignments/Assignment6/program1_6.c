////////////////////////////////////////
//
// Function Name : FindLargest
// Description : Write a program which accept name from user and print that name.
// Input : Character array
// Output : None
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>

int main()

{
    char name[30];

    printf("Please enter full name");
    scanf("%[^'\n']",name);

    printf("Your name is %s\n",name);

    return 0;
}
