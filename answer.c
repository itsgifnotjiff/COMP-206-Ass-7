// Student Name : Yordan Radev
// Student ID   : 260 744 314

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main() {
	
	// Payload Get
	char *data = getenv("QUERY_STRING");
	

	// Tokenize 
	
	char *tokOne;
	int goldCoins;
	char *command;
	tokOne = strtok( data, "=" );
	if( strcmp(tokOne,"answer") == 0 ){
		command = strtok( NULL, "&" );
		if( strtok( NULL, "=" ) == NULL ) goldCoins = 10;
		else goldCoins = atoi( strtok( NULL, "" ) );
	} else {
		goldCoins = atoi( strtok( NULL, "&" ) );
		if( strtok( NULL, "=" ) != NULL ) command = strtok( NULL, "" );
	}
	
	printf("Content-Type:text/html\n\n");
	printf("<html>");
	printf("<body>");

	if ( strcmp( command , "NORTH" ) == 0 ) {
		printf("<a href=\"http://cs.mcgill.ca/~anikul3/cgi-bin/addgold.cgi?gold=%d\">Press HERE to go NORTH</a>", goldCoins );
	} else if ( strcmp( command , "SOUTH" ) == 0 ) {
		printf("<a href=\"http://cs.mcgill.ca/~aduboi8/cgi-bin/addgold.cgi?gold=%d\">Press HERE to go SOUTH</a>",goldCoins);
	} else if ( strcmp( command , "EAST" ) == 0 ) {
		printf("<a href=\"http://cs.mcgill.ca/~ywang498/cgi-bin/addgold.cgi?gold=%d\">Press HERE to go EAST</a>",goldCoins);
	} else if ( strcmp( command , "WEST" ) == 0 ) {
		printf("<a href=\"http://cs.mcgill.ca/~ldesch11/cgi-bin/addgold.cgi?gold=%d\">Press HERE to go WEST</a>",goldCoins);
	} else if ( strcmp( command , "GOLD" ) == 0 ) {
		 printf("You have %d gold coins.<br /> <a href=\"http://cs.mcgill.ca/~yradev/cgi-bin/addgold.cgi?gold=%d\">Press HERE to go back.</a>",goldCoins,goldCoins);
		

	} else if ( strcmp( command , "5" ) == 0 ) {
		goldCoins += 10;
		printf("Right answer, now you have %d gold coins. <br /><a href=\"http://cs.mcgill.ca/~yradev/cgi-bin/addgold.cgi?gold=%d\">Press HERE to go back. </a>", goldCoins, goldCoins);	
		if ( goldCoins >= 100 ) {
			printf("Victory!!! <br /> <a href=\"http://cs.mcgill.ca/~yradev\">Press HERE to start a new game</a>");
	
		}

	} else {
        
		goldCoins -= 5;
		printf("Neither a direction nor a right answer. You have %d gold coins left. <br /> <a href=\"http://cs.mcgill.ca/~yradev/cgi-bin/addgold.cgi?gold=%d\">Press HERE to go back.</a>", goldCoins, goldCoins);
	
	
		if(goldCoins <= 0) {
            
			printf("Defeat! <br /> <a href=\"https://www.cs.mcgill.ca/~yradev\">Press HERE to start over</a>");
		}
	}
	
	printf("</body>");
	printf("</html>");
}
