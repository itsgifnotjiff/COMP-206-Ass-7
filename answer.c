// Student Name : Yordan Radev
// Student ID   : 260 744 314

#include <stdio.h>
#include <stdlib.h>

int main() {
    
char north[]="NORTH",south[]="SOUTH", east[]="EAST", west[]="WEST", gold[]="GOLD", correctAnswer[]="5";    
char array[100];
    
char *data = getenv("QUERY_STRING");
// data = getenv(QUERY_STRING);

printf("syvif nvb");

if (strcmp(data,north) == 0)
{
    printf(<html><a href="https://www.cs.mcgill.ca/~bemili">Press HERE to go NORTH</a></html>);
} else if (strcmp(data,south) == 0)
{
    printf(<html><a href="https://www.cs.mcgill.ca/~bemili">Press HERE to go SOUTH</a></html>);
} else if (strcmp(data,east) == 0)
{
    printf(<html><a href="https://www.cs.mcgill.ca/~bemili">Press HERE to go EAST</a></html>);
} else if (strcmp(data,west) == 0)
{
    printf(<html><a href="https://www.cs.mcgill.ca/~bemili">Press HERE to go WEST</a></html>);
} else if (strcmp(data,gold) == 0)
{
    printf("GOLD");
}


/*
char *stringSubmit = getenv(“QUERY_STRING”);
data = getenv(QUERY_STRING);

token = strtok(array, "?");
while(token != NULL)
{
 token = strtok(NULL, "?");
 fprintf(text, 
}
*/


/*
printf("Content-type: text/html\n\n");
printf("<html>");
printf("<head><title>MY TITLE</title></head>");
printf("<body><p>Something</p></body>");
printf("</html>");
*/



}
