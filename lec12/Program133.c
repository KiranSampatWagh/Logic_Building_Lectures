//Accept full name form user and Display it on screen.

#include<stdio.h>

int main()
{
    char Arr[30] ;
   
    printf("Enter full name:\n");
    //scanf("%s",&Arr);
    scanf("%[^\n]s",Arr);

    printf("your name is :%s",Arr);

    return 0;
}