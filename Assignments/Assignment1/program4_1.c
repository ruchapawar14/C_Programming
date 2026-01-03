////////////////////////////////////////
//
// Function Name : check
// Description : Accept one number and check whether is divisible by 5 or not.
// Input : Integer
// Output : Boolean
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }

    return 0;
}
    
