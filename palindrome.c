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
    
	int product = factor1 * factor2;
	int maxP = 0;
	int reverse = 0;
	int remainder = 0;

	while(product > 0)
	{
		remainder = product % 10;
		product = product / 10;
		reverse = 10 * reverse + remainder;
	}

	if(reverse == product)
	{
		if(product > maxP)
		{
			maxP = product;
			return maxP;
		}
	}


    return 0;
}

//I will be doing test runs here
int main(void)
{
	int total = 0;
	for(int i = 100; i < 1000; i++)
	{
		for(int j = 100; j < 1000; j++)
		{
			total = eulerLogic(i,j);
			if(total > 0)
			{
				printf("%d, %d, %d", i, j, total);
			}
		}
	}
    
    return total;
    
}
