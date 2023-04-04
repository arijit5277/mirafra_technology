#include<stdio.h>
void display(char [],char []);
void main()
{
	char str1[] = "Arijit";
	char str2[] = "karmahapatra";
	display(str1,str2);
}
void display( char str[],char str0[]) // This char str[] = char *str ... so its not calling the value its calling the address
				// Call by reference method 
{
	printf("%s",str);
	printf("%s",str0);
}
