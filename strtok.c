#include <stdio.h>
#include <string.h>
#define L 100
int main () {
   char input[L]="We; Are; Very; Happy; with; strtok";
	char *token=strtok(input,";");
	printf("%s\n",token);
	while(token!=NULL){
		token=strtok(NULL,"; ");
		printf("%s\n",token);
	}
   return(0);
}
