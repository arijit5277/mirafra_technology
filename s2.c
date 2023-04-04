#include<stdio.h>
#include<string.h>
int main()
{
	char name[30],count=0;
	printf("Enter the String : " );
	fgets(name);
	printf("%s",name);
	count=strlen(name);
	printf("%d",count);
}
