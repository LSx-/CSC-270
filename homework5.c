/*
 * homework5.c
 *
 *  here we will try to make a palindrome product
 *  more details in teh EulerLogic method comment
 *
 *  Created by Michael Castillo on 9/4/17.
 *  Version 1.0
 *
 *  Credit/Sources: 2dtx.com for giving me factors after googling palindrome numbers
 */

#include <stdio.h>

/*
 * The EulerLogic method.
 *
 * Here is where all of the hardwork for the computer will take place
 * The Euler logic is supposed to do palindrome and give us a product
 * that will be the "largest palindrome product" and the way to get this
 * is by doing multiplying  two 3 digit numbers into each other and they
 * MUST read back and forth the same way
 *
 *
 */
int eulerLogic(int factor1, int factor2)
{
    
    int sum = factor1 * factor2;
    printf("%d, %d, %d \n", factor1, factor2, sum);
    
    return sum;
}

//I will be doing test runs here
int main(void)
{
    //tests
    eulerLogic(91,99);
    eulerLogic(411,219);
    eulerLogic(328,271);
    eulerLogic(429,231);
    eulerLogic(913,993);
    
    return 0;
    
}