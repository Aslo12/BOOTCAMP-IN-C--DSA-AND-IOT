//PROGRAM TO FIND THE Nth TERM OF THE FIBONNACI SERIES.
#include<stdio.h>
int main()
{
    int prev=0,curr=1,next=0,n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
   // printf("1");
    for(i=0; i<n-1; i++)
    {
        next=prev+curr;
        prev=curr;
        curr=next;

    }
      printf(" number is  %d ", next);
      
    return 0;
}