#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int voo=0;
    int a;
    char e='a';
    int w=0;
    int h=10;
    while(voo!=3)
    {
        printf("\nPress 1\a");
        printf("2 to change the max number\a");
        printf("3 to quit\a");
        printf("Enter Option:");
        scanf("%d",&voo);
        srand(time(0));
        int guess=(rand()%h)+1;
        if(voo==1)
        {
            a:printf("\nEnter your guess:");
            scanf(" %c",&e);
            if(e=='e')
            {
                continue;
            }
            else{
                a=e-'0';
                if(a==guess)
                    printf("You won!\a");
                else if(a<guess){
                    printf("Too low\a");
                    goto a;
                }
                else{
                    printf("Too high\a");
                    goto a;
                }
            }
        }
        else if(voo==2)
        {
            b:printf("\n Max number 10\nEnter the max value:");
            scanf("%d",&h);
            if(h>0 && h<=10)
                printf("Value.\a");
            else{
                printf("Invalid max\a");
                goto b;
            }
        }
    }
    printf("\nThank you.\a");
}

