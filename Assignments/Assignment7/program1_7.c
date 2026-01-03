////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Write a program which accept number from user and print that number of $ & * on screen.
//                
// Input         : Integer
// Output        : Void
// Author        : Rucha Pawar
// Date          : 05/12/2025
//
////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;    
    }

    for(iCnt = 1; iCnt <= (2 * iNo); iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("$\t");
        }
        else
        {
            printf("*\t");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
