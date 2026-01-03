////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description : Check leap year.
// Input : Integer
// Output : None
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>

void CheckLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year\n", year);
    }
    else
    {
        printf("%d is not a Leap Year\n", year);
    }
}

int main()
{
    int year;

    printf("Enter year : ");
    scanf("%d",&year);

    CheckLeapYear(year);

    return 0;
}
