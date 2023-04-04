#include<stdio.h>
//#pragma pack(1)
struct ABC{
	int a;
	int *h;
	char b;
	float c;
};

int main()
{
	struct ABC var[200];
	printf("%ld\n",sizeof(var));
}
