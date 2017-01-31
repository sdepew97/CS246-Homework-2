/*****************************************
 * Assignment 2
 * Name:    Sarah Depew
 * E-mail:  sdepew@brynmawr.edu
 *
 * This program counts the characters, words, and lines for a line put into the terminal.
 * To count the words, the program instead counts the whitespace, which is said to follow
 * each word. As a result, if there is not a space following a word, then it is not counted. 
 * However, as the stipulations of the assignment said that whitespace follows each word, then
 * it can be used to count the words. 
 *
 //is the number of spaces the number of words??
 ****************************************/

#include <stdio.h>
#include <ctype.h>   // for isalpha

int main(){
	//current character from the input 
	char current; 
	//variables to store the values for the number of characters, spaces, and lines being counted
	int characters=0, words=0, lines=0;
	
	//while loop that gets each char from the line and terminates with an EOF
	while((current = getchar())!=EOF){
		
		//if the character is a new line, then lines is incremented and characters is incremented.
		if(current=='\n'){
			characters++;
			lines++;
		}
		
		//if the character is a space, then words is incremented and characters is incremented
		else if(isspace(current)){
			characters++;
			words++;
		}
		
		//everything else is also a character, so character is incremented
		else{
			characters++;
		}
	}
	//the number of characters, words, and lines printed to the terminal
	printf("Characters Total: %d\nWords Total: %d\nLines Total: %d\n", characters, words, lines);
	
	//return value for main()
	return 0;
}