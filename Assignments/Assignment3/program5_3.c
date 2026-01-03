////////////////////////////////////////

// Function Name : ChkVowel
// Description : Accept one character from user and check whether that character is vowel or not.
// Input : Character
// Output : Boolean
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char Cvalue)
{
    if((Cvalue == 'A') || (Cvalue == 'E') || (Cvalue == 'I') || (Cvalue == 'O') || (Cvalue == 'U') ||
       (Cvalue == 'a') || (Cvalue == 'e') || (Cvalue == 'i') || (Cvalue == 'o') || (Cvalue == 'u'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : \n");

    scanf("%c",&cValue);
    
    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}


