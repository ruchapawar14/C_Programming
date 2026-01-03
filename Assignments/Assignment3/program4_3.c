////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description : Accept one character from user and convert case of that character.
// Input : Character
// Output : Character
// Author : Rucha Pawar
// Date : 4/12/2025
//
////////////////////////////////////////

#include<stdio.h>

char DisplayConvert(char Cvalue)
{
    if((Cvalue >= 'A') && (Cvalue <= 'Z'))
    {
        printf("%c", Cvalue + 32);
    }
    else if((Cvalue >= 'a') && (Cvalue <= 'z'))
    {
        printf("%c", Cvalue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");

    scanf("%c",&cValue);
    
    DisplayConvert(cValue);

    return 0;
}


