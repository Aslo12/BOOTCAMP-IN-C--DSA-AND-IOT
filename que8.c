//PROGRAM TO FIND NEXT PRIME NUMBERS OF A GIVEN NUMBER.
#include<stdio.h>
int main()
{
    int n,i,flag=0,a;
    printf("Enter Numbers less than 1000:");
    scanf("%d",&n);
   
    for(a=n+1; a<=1000 ; a++)
    {
        flag=0;
    for(i=2; i<n; i++)
    {
        if(a%i==0)
        {
    
        flag =1;  
        break;
        }

    }
    
     if(flag==0)
     {
    printf("THE CLOEST PRIME NUMBER IS %d is %d ",n,a);
    break;
    }
    }
   
    return 0;
 
}