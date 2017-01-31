/*****************************************
 * Assignment 2
 * Name:    Sarah Depew (with help from the TA, Rachel Xu, to discuss algorithmic approach)
 * E-mail:  sdepew@brynmawr.edu
 *
 * This program coverts a hexadecimal value to its octal equivalent. The program first takes in 
 * the hexadecimal number backwards as a line of characters, converts each one, puts it to the screen
 * and then exits the first while loop at the end of the line. Next, if there is a quotient remaining, 
 * which means that the octal number will exceed the number of places of the hexadecimal number,
 * there is another while loop that handles that number and prints those final few digits to the 
 * terminal. It is important to note that the octal output is also backwards, as specified
 * in the project description. 
 * 
 ****************************************/

//I received help from the TA on this assignment 
#include <stdio.h>

int main(){
	//variables to store character being read in, the results of division, and the value to 
	//multiply the input character by in order to covert it to octal 
	char c; 
	int result; 
	int quotient = 0;
	int remainder = 0;  
	int multiply = 1;
	
	//first while loop that reads in each of the characters
	while((c=getchar())!='\n'){	
		//converts c to hexadecimal value in order to be able to divide
		if(c<=57&&c>=48){
			c-=48;
		}
		else if(c>=65&&c<=70){
			c-=55;
		}
		
		//completes the conversion from hexadecimal to octal
		result = c*multiply + quotient; 
		remainder = result%8; 
		quotient = result/8; 
		putchar(remainder+48); 

		//updates value to use in conversion 
		multiply*=2; 	
		
	}
	//second while loop that deals with the remaining quotient and octal values to be printed
	while(quotient>0){
		result = quotient;
		remainder = result%8; 
		quotient = result/8; 
		putchar(remainder+48);
	} 
	//puts a line for readability 
	putchar('\n');
	
	//return value of main()
	result = 0; 
}