#include<stdio.h>

void CountDigit(char str[])
{
    int iCount = 0;

     while(*str != '\0')
    {
      if((*str >= 48) && (*str <= 57))
      {
        iCount++;
      }
      str++;
    }

    printf("No. of digits are : %d\n", iCount);
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountDigit(Arr);

    return 0;
}