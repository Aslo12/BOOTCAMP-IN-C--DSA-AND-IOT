//PROGRAM TO PRINT ALL PRIME NUMBERS BETWEEN TWO GIVEN NUMBERS .
#include<stdio.h>
int main()
{
    int n,n1,n2,i,flag=0;
    printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);
   
    for(n=n1; n<=n2; n++)
    {
        flag=0;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
    
        flag =1;  

    }
    
     if(flag==0)
    printf("%d ",n);
    }
   
    return 0;
 
}