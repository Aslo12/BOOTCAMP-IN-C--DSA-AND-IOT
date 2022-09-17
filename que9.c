// PROGRAM TO CHECK ARMSTRONG NUMBER OR NOT..
#include<stdio.h>
#include<math.h>
int main()
{
    int num,x,y,rem,count=0,sum=0;
    printf("Enter Number");
    scanf("%d", &num);
    x=num;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
        y=num;
        while(y!=0)
        {
            rem=y%10;
            y=y/10;
            sum+=pow(rem,count);
        }
      if(sum==num)
      printf("\n%d is an Armstrong Number",num);
      else
      printf("\n%d is not Armstrong Number", num);
      return 0;
}