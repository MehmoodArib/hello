#include<stdio.h>
int prime(int,int);
int main()
{
	int a,b;
printf("Enter the two nbrs between which you want to check prime nbrs ");
scanf("%d %d",&a,&b);
prime(a,b);

return 0;
}
int prime(int x,int y)

{
   int i,count,j;
   for(i=1;i<10000;i++)
   {
	   count=0;
	   for(j=1;j<=i;j++)
	   {
		   if(i%j==0)
			   count++;
	   }
		   if(count==2)
			   printf("%d\n",i);

    }
   return 0;
}
