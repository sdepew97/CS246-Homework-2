/*****************************************
 * Assignment 2
 * Name:    Sarah Depew
 * E-mail:  sdepew@brynmawr.edu
 *
 * This program takes in characters from the command line and prints them back out to the
 * terminal using putchar(current char) and getchar(). Additionally, this program changes
 * all lowercase letters to their uppercase counterparts. However, it does this not by algebra, 
 * but rather by using bit shifting. 
 *
 ****************************************/

#include <stdio.h>
#include <ctype.h>   // for isalpha

int main(){
	//current character from the input line
	char current; 

	//while loop that get the next character and converts it to uppercase using bit flicking
	while((current = getchar())!=EOF){
		//if statment that confirms the character is alphanumeric and lowercase (needs coverting)
		if(isalpha(current) && 0b01100001 <= current && 0b01111010 >= current){
			current=(current^0b00100000); //conversion
		}
		putchar(current);
	}
	return 0;
}