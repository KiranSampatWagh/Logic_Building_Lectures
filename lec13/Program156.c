//Accept string form user and also accept one empty string and copy the data in empty string.

#include<stdio.h>

void strcpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = *src;
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr , Brr);     //strcpyX(100, 200);

    printf("copied string is : %s\n",Brr);

    return 0;
}
