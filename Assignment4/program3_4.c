////////////////////////////////////////
//
// Function Name : NonFact
// Description : Write a program which accept number from user and display all  its non factors.
// Input : Integer
// Output : Integer
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
