#include <stdio.h>
#include <string.h>
int main () {	
	char *messages[3] = {"one","two","three" };	
	int i,totalmessages=0;	
	char *allmessages;	
	for(i=0;i<3;i++){
		printf("\nEnter a string:");
		messages[i]=(char*) malloc(10);
		scanf("%s",messages[i]);
		totalmessages+=strlen(messages[i]);
	}
	allmessages=(char*)malloc(totalmessages);
	strcat(allmessages,messages[0]);
	for(i=0;i<3;i++){
		strcat(allmessages," ");
		strcat(allmessages,messages[i]);
	}
	printf("\12 %s",allmessages);
	free(allmessages);
	for(i=0;i<3;i++)
		free(messages[i]);
   return(0);
}
