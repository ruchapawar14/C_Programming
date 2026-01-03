////////////////////////////////////////
//
// Function Name : FactRev
// Description : Write a program which accept number from user and display its factors in decreasing order.
// Input : Integer
// Output : Integer
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}