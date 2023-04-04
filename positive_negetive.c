#include<stdio.h> //using bitwise opoerator
int main()
{
	int num;
	printf("Enter the num : ");
	scanf("%d",&num);
	if(((num>>31)&1)==0)
		printf("positive");
	else
		printf("Negetive");

}
