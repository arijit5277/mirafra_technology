#include<stdio.h>
int main()
{
#define SIZEOF(X) ({typeof(X)Y;((char*)(&Y+1)-(char*)(&Y));})
	//printf("%ld\n",SIZEOF(char));
}
