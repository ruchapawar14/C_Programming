////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : Write a program which accept area in square feet and convert it into square meters.
//                 1 square feet = 0.0929 square meters              
// Input         : Double
// Output        : None
// Author        : Rucha Pawar
// Date          : 05/12/2025
//
////////////////////////////////////////

#include<stdio.h>
double SquareMeter(float fSquareFeet)
{
    double dSquareMeter = 0.0;
    dSquareMeter = fSquareFeet * 0.0929;
    return dSquareMeter;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is : %.2f\n", dRet);

    return 0;
}