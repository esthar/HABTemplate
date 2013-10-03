/*
 * HABTemplate.c
 *
 * Created: 9/18/2013 3:16:45 PM
 *  Author: andre_000
 
 This is a template for the library of each sensor we need to interface with.
 */ 


#include "header.h"

int main(void)
{
	//Test that the functions work
	sampleFunc1();
	sampleFunc2(0b10101010);
	
    while(1)
    {
        //If you want anything in the while loop, place it here 
    }
}

void sampleFunc1(void){
	//Do action
}

char sampleFunc2(char a){
	//Send byte
}