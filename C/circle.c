/*
*This program will take the input for the radius and print out
*the diameter of the circle, the area of the circle, and the circumference
*of the circle.
*
*Author: Michael Castillo
*Date:9/2/2017
*Version:1.1
*
*/

//in the first line, we get the header with stdio.h
//in the 2nd line, we define pi to = 3.1415926
#include <stdio.h>
#define PI 3.1415926

/*
*Description:The main body contains floats for the circle. r is a user input number
*
*PreConditions: r=0, the User must input a positive number.
*
*PostConditions: Get the diameter, area, and circumference of the circle after
*		 The user inputs a positive number for the radius of the circle
*
*we will be returning X, X is determined whether the radius is above 0.
*If the number is greater then 0, return 0.
*If the number is less than or equal to 0, return 1
*
*/
int main(void)
{

float r;

printf("Please put a positive number for the Radius: ");
scanf("%f",&r);

float d = r * 2;
float c = PI * d;
float a =r * r * PI;

printf("A Circle with a Radius of: %.3f \n", r);
printf("The Diameter is: %.3f \n",d);
printf("The Area is: %.3f \n", a);
printf("The Circumference is: %.3f \n", c);

int x;

if(r > 0) x = 0;
if(r <= 0)x = 1;

return x;
}
