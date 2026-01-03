////////////////////////////////////////
//
// Function Name : PrintEven
// Description : Write a program which accept one number from user and print that number of even numbers on screen.
// Input : Integer
// Output : Integer
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
