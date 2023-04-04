#include<stdio.h>
int main()
{
	int num,temp,pnum=0,rem,r,pernum;
	printf("Enter the number:");
	scanf("%d",&num);
	temp = num;
	pernum = 0;
	pnum = 1;
	while(num)
	{
		r = num%10;
		num = num/10;
		pernum = pernum +r;
	}
	while(temp)
	{
		rem=temp%10;
		temp = temp/10;
		pnum = pnum * rem;
	}
	if (pnum == pernum)
		printf("%d%d",pernum,pnum);
}
