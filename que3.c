//PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS THERE IN THE FIBONACCI SERIES OR NOT..
#include<stdio.h>
int main()
{
    int prev=0,curr=1,next=0,n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    //printf("1");
    for(i=0; 1; i++)
    {
        next=prev+curr;
        prev=curr;
        curr=next;

        if(n==next)
        {
            printf("NUMBER FOUND");
            break;

        }
        if(next>n)
        {
            printf("NUmber Not Found");
            break;
        }

    }
      
    return 0;
}