////////////////////////////////////////
//
// Function Name : CircleArea
// Description   : Write a program which accept radius of circle from
//                 user and calculate its area.
//                 consider value of PI as 3.14                
// Input         : Integer
// Output        : None
// Author        : Rucha Pawar
// Date          : 05/12/2025
//
////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    dArea = 3.14 * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius of circle : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %.2f\n", dRet);

    return 0;
}
