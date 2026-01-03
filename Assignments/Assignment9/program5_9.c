////////////////////////////////////////
//
// Function Name : FactorialDiff
// Description   : Write a program  which returns difference between
//                 even factorial and odd factorial of given number.
// Input         : Integer
// Output        : None
// Author        : Rucha Pawar
// Date          : 05/12/2025
//
////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;    
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is : %d\n", iRet);

    return 0;
}