#include<stdio.h>
//adding two values using recursion
int sum(int x,int y)
{
	if(y==0)
	{
		return x;
	}
	else
	{
		return sum(x+1,y-1);
	}
}
  
   int main()
   {
   	  int a,b,c;
   	  
   	  printf("Enter first value of a");
   	  scanf("%d",&a);
   	  
   	  printf("Enter second value of b");
   	  scanf("%d",&b);
   	  
   	  c=sum(a,b);  
   	  printf("\nsum=%d",c);
   	  return 0;
   }
