/*****************************************
 * Assignment 2
 * Name:    Sarah Depew
 * E-mail:  sdepew@brynmawr.edu
 *
 * This program takes in characters from the command line and prints them back out to the
 * terminal using putchar(current char) and getchar(). Additionally, this program changes
 * all lowercase letters to their uppercase counterparts.  
 *
 ****************************************/

#include <stdio.h>
#include <ctype.h>   // for isalpha

int main(){
	//the character the user inputs and that is read by getchar()
	char current; 

	//a while loop that reads in the characters and terminates with an EOF
	while((current = getchar())!=EOF){
		//this if statement takes in a character, checks that it is alphanumeric, and lowercase then
		//converts it to uppercase 
		if(isalpha(current) && 'a' <= current && 'z' >= current){
			current=current-'a'+'A'; 
		}
		//this statment prints the character in uppercase in the terminal
		putchar(current);
	}
	return 0;
}