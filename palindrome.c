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

//I will be doing test runs here
int main(void)
{
	int total = 0;
    int product = 0;
    int product2 = 0;
    int maxP = 0;
    int reverse = 0;
    int remainder = 0;
    int factor1 = 0;
    int factor2 = 0;
    
	for(int i = 100; i < 1000; i++)
	{
		for(int j = 100; j < 1000; j++)
		{
            product = i * j;
            product2 = product;
            while (product2 > 0)
            {
                remainder = product2 % 10;
                product2 = product2 / 10;
                reverse = 10 * reverse + remainder;
            }
            
            if (reverse == product)
            {
                if(product > maxP)
                {
                    maxP = product;
                    factor1 = i;
                    factor2 = j;
                    
                }
            }
            reverse = 0;
        }
	}
    total = maxP;
    printf("%d, %d, %d\n", factor1, factor2, total);
    return 0;
    
}
