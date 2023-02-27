//Demonstration of iteration using for loop

#include<stdio.h>

//1 :Write the common statement in the loop block
//2 :Check whether the no of iterations are already known or not
//3 :If the iteration count is fixed then go for for loop
//4 :If iteration count is not fixed then go for while

void Display()
{
    int iCnt =0;
    for(iCnt=1; iCnt<=5; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    Display();

    return 0;
}