/*
 * homework5.c
 *
 *  here we will try to make a palindrome product
 *  more details in teh EulerLogic method comment
 *
 *  Created by Michael Castillo on 9/4/17.
 *  Version 1.2
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
int eulerLogic(int factor1, int factor2)
{
    
    int product = factor1 * factor2;
    printf("%d, %d, %d \n", factor1, factor2, product);
    
    return product;
}

//I will be doing test runs here
int main(void)
{
    int i = 100;
    int product;
    
    while(i < 1000)
    {
        int j = 100;
        while(j < 1000)
        {
            product = i * j;
	    if (eulerLogic(product)) {
		    if (product > maxp) {
			    maxp = product;
		    }
	    }

		/*
            int f1 = i;
            int f2 = j;
            eulerLogic(f1,f2);
		*/
	    
            j++;
        }
        i++;
    }
    
    return 0;
}
