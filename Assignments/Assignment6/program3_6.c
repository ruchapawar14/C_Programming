////////////////////////////////////////
//
// Function Name : ChkEqual
// Description : Write a program which accept otwo numbers from user and check whether they are equal or not.
// Input : Integer
// Output : None
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers\n");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}