//Accept string form user and also accept one empty string and copy the data small to capital in empty string.

#include<stdio.h>

void strcpyuprX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;    
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    strcpyuprX(Arr , Brr);    

    printf("copied string is : %s\n",Brr);

    return 0;
}
