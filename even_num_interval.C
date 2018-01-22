#include<stdio.h>
int main()
{
int a,b,i,rem;
printf("enter the number",a);
scanf("%d",&a);
printf("enter the number,b);
scanf("%d",&b);
for(i=a;i<=b;++i)
{
rem=i%2;
if(rem==0)
printf("%d\n",i);
}
return 0;
}
