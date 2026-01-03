////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description : Check even or odd.
// Input : Integer
// Output : None
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>

void CheckEvenOdd(int num)
{
    if((num % 2) == 0)
    {
        printf("%d is Even\n",num);
    }
    else
    {
        printf("%d is Odd\n",num);
    }
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}
