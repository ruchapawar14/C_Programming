////////////////////////////////////////
//
// Function Name : Percentage
// Description   : Write a program which accept total marks and obtained marks from user and calculate percentage.
//                
// Input         : Integer , Integer
// Output        : Float
// Author        : Rucha Pawar
// Date          : 04/12/2025
//
////////////////////////////////////////

#include<stdio.h>

float Percentage(int iTotalMarks, int iObtainedMarks)
{
    float fPercentage = 0.0;

    if(iTotalMarks == 0 || iObtainedMarks == 0 || iObtainedMarks > iTotalMarks)
    {
        return 0.0;
    }

    fPercentage = ((float)iObtainedMarks / (float)iTotalMarks) * 100.0;

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %.1f%%\n", fRet);


    return 0;
}