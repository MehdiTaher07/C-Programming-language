#include <stdio.h>
#include<string.h>
int main()
{
	char str[] = "Bangalore", chr = 'g';
	char str1[12], i, j, k = 0;
	
	for(i=0; str[i]!='\0'; i++){
		if(str[i]==chr)
		{
			for(j=i; str[j]!='\0'; j++)
			{
				str1[k] = str[j];
				k++;
			}
		str1[k]='\0';
		break;
		}
	}
	printf("%s",str1);
	return 0;
}
