//Accept string form user and also accept one empty string and copy the data captil to small in empty string.

#include<stdio.h>

void strcpyuprX(char *src , char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;    
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

    strcpyuprX(Arr , Brr);    //strcpyX(100,200);

    printf("copied string is : %s\n",Brr);
    printf("Original string is : %s\n",Arr);

    return 0;
}
