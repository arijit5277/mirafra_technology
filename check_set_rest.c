#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = -10,i;
	//printf("Enter bit pos");
	//scanf("%d",&i)
	int b = abs(a);
	for(i = 31;i>=0;i--)
	{
		if(b&(1<<i))
		{
			printf("1");	
		}
		else
		{
			printf("0");
		}
	}//
}
