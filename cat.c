/*****************************************
 * Assignment 2
 * Name:    Sarah Depew
 * E-mail:  sdepew@brynmawr.edu
 *
 * This program takes in characters from the command line and prints them back out to the
 * terminal using putchar(current char) and getchar().
 *
 *****************************************/

#include <stdio.h>

int main(){
	//Variable representing the current char in the line typed by the user
	char current; 
	
	//loop that obtains the chars and prints them out again
	while((current = getchar())!=EOF){
		putchar(current);
	}
	//return value for main()term
	return 0;
}
