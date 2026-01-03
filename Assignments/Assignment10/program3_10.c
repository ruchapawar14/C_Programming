////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description   : Write a program which accept distance in km and convert it into meter.
//                 1 km = 1000 meter              
// Input         : Integer
// Output        : None
// Author        : Rucha Pawar
// Date          : 05/12/2025
//
////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iKilometer)
{
    int iMeter = 0;
    iMeter = iKilometer * 1000;
    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d\n", iRet);

    return 0;
}