#include <stdio.h>
#include<string.h>
int main()
{
	char *str1 = "Hello";int len;
	for(len = 0; str1[len] !='\0';len++);
	printf("%d",len);
	return 0;
}
