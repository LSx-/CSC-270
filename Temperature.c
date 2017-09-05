/*
* temperature.c
* 
* here we will be converting temperatures and allowing the user to pick which temperature
* they would like to use 
* 
* Created by Michael Castillo on 9/1/17.
* Version: 1.0
*
* Description: The program will take in 2 input from the user , a float and then a char
* 
* PreCondition: none
* 
* PostCondition: after the user inputs what they would like to be converted. 
* the program will take which ever letter they entered (f, c, or k) and it will
* announce the temperature before converting and then it will covert into the other
* temperatures that isnt the one the user picked.
* 
* Credit/sources: 
* google- for giving me the formula to convert C to F
*/

//the standard input/output header we need.
#include <stdio.h>

int main(void)
{
    float temp;
    char type;
    printf("Enter input Temperature: ");
    scanf("%f%c",&temp,&type);
    //if the user put in f,
    //we will display the Fahrenheit that was inputted and then convert it
    if (type == 'f'|| type =='F') 
    {
        printf("%.2f Fahrenheit converts to:\n", temp);
        float c = (temp-32)/1.8;
        printf("%.2f Celsius\n", c);
        float k = c + 273.15;
        printf("%.2f Kelvin\n", k);
        
    	return 0;
    }
    
    //if the user puts in c, 
    //we will display the Celsius that was inputted and then convert it 
    if(type =='c' || type =='C')
    {
    	printf("%.2f Celsius converts to:\n", temp);
    	
    	float f = temp*9/5+32;
    	printf("%.2f Fahrenheit\n", f);
    	
    	float k = temp + 273.15;
    	printf("%.2f Kelvin\n", k);
    	
    	return 0;
    }
    
    //if the user puts in k,
    //we will display the Kelvin that was inputted and then convert it.
    if(type =='k' || type == 'K')
      {
      	printf("%.2f Kelvin converts to:\n", temp);
      	
      	float c = temp - 273.15;
      	printf("%.2f Celsius\n", c);
      	
        float f = c*9/5+32;
      	printf("%.2f Fahrenheit\n", f);
      	
      	return 0;
      }
    
    //if the user doesnt put f, c, or k in the type of temp
    //the program will print out the error and close with a value of 1
    else
    {
    	printf("Invalid temperature scale\n");
    	
    	return 1;
    }
    
}