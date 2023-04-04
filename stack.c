#include<stdio.h>
int main()
{
	char x[2];
	int a;
	if((&x[0]-&x[1])<0)
		printf("Stack Down \n");
	else
		printf("Stack Up \n");
		//printf("%d\n",sizeof(short int));
}
