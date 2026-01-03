////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Accept amount in US dollars and return its 
//                 corresponding value in Indian Rupees.
//                 Consider 1$ = 70 INR
// Input         : Integer
// Output        : None
// Author        : Rucha Pawar
// Date          : 05/12/2025
//
////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRupees = 0;
    iRupees = iNo * 70;
    return iRupees;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in US dollars : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Amount in Indian Rupees is : %d\n", iRet);

    return 0;
}



