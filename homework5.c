/*
 * homework5.c
 *
 *  here we will try to make a palindrome product
 *  more details in teh EulerLogic method comment
 *
 *  Created by Michael Castillo on 9/4/17.
 *  Version 2.0
 *
 *  Credit/Sources: professor Lee Stekoski, for trying to help me out on seeing
 *  if the computer can recognize palindromes
 */

#include <stdio.h>

/*
 * The EulerLogic method.
 *
 * Here is where all of the hardwork for the computer will take place
 * the computer will take the 3 digit factor and then multiply each other
 *
 *
 */
int eulerLogic(int factor1 , int factor2)
{
    
    int reverse = 0;
    int remainder = 0;
    int product = factor1*factor2;
    
    while (product > 0)
    {
        remainder = product % 10;
        product = product / 10;
        reverse = 10 * reverse + remainder;
        
    }
    
    if(reverse == product)
    {
        int maxP = 0;
        if(product > maxP)
        {
            maxP = product;
            printf("%d, %d, %d\n", factor1, factor2, maxP);
	    return maxP;

        }
    }
    else
    {
        return product;
    }
    return product;
}

//I will be doing test runs here
int main(void)
{
	for(int i = 100; i < 1000; i++)
	{
		for(int j = 100; j < 1000; j++)
		{
			eulerLogic(i,j);
		}
	}
	return 0;
}
