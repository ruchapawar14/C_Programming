////////////////////////////////////////
//
// Function Name : FhtoCs
// Description   : Write a program which accept temperature in Fahrenheit and convert it into Celsius.
//                 1 Celsius = (Fahrenheit - 32) * 5/9              
// Input         : Double
// Output        : None
// Author        : Rucha Pawar
// Date          : 05/12/2025
//
////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fFahrenheit)
{
    double dCelsius = 0.0;
    dCelsius = (fFahrenheit - 32) * 5.0 / 9.0;
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %.2f\n", dRet);

    return 0;
}