/*****************************************
 * Assignment 2
 * Name:    Sarah Depew
 * E-mail:  sdepew@brynmawr.edu
 *
 * This program coverts decimal values to hexadecimal values. The program first takes in a line 
 * of characters, converts the characters to the proper decimal value, and then converts that 
 * decimal value to hexadecimal, then prints those characters to the terminal. It is important 
 * to note that the output is backwards, as specified in the project description. 
 * 
 ****************************************/

#include <stdio.h>

int main(){
	//integer value of the input number
	int decvalue=0;
	
	//variable used for storing the integer value 
	int total = 0; 
	
	//each character read in is stored in c
	char c;
	
	//while loop that converts the input to an integer value
	while((c=getchar())!='\n'){
		total*=10; //multiplies to add necessary zeros 
		decvalue=c; //converts the char to an integer 
		decvalue-=48; //converts char ASCII to actual decimal value
		total+=decvalue; //takes decvalue and adds it to total		
	}
	
	//convert from decimal to hexadecimal characters and prints characters to terminal
	
	//variables that store the result of division and the remainder of mod of the number
	int result, remainder;
	
	//while loop that ensures the number is done printing before it terminates 
	while(total!=0){
		//conversion math
		remainder = total%16;
		result = total/16;
		
		//if statements that ensure the correct character is printed to the terminal
		if(remainder<10){
			putchar(remainder+48);
			total = result;
		}
		else if(remainder>=10){
			putchar(remainder+55);
			total = result;
		}
	} 
	//adds a newline for readability
	putchar('\n');
	
	//return value for main()
	return 0; 
}
