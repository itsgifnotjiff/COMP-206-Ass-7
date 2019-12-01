// Sudent Name : Yordan Radev
// Student ID  : 260 744 314

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {
	
	// Payload
	char *data = getenv("QUERY_STRING");
	strtok(data, "=");
	
	int gold = atoi(strtok(NULL,""));
	
	printf("Content-Type:text/html\n\n");
	printf("<html>");
	printf("<head> </head>");
	printf("<body>");


	FILE *p = fopen("../index.html","rt");
	if(p==NULL) printf("Error trying to open the index.html file");
	char line[1000];
	while(fgets(line,999,p)){
		char tag[20];
		sscanf(line, "%s", tag);
		if(strcmp(tag, "<form")==0){
			printf("<form action=\"answer.cgi\" method=\"get\">\n");
			printf("<input type=\"hidden\" name=\"gold\" value=\"%d\">",gold);
		} else {
			printf("%s", line);
		}	

	}

	fclose(p);

}
