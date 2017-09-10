/*
 * time_to_sec.c
 *
 *  Created on: Jul 20, 2016
 *      Author: leune
 *
 *  Editted/reworked by: Michael Castillo.
 *  Edit date: 9/7/17
 *
 */
// appropriate #include statements
#include <stdio.h>

/* Convert a time interval specified in hours, minutes and seconds to
 * seconds.
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Preconditions:
 *     0 <= minutes < 60
 *     0 <= seconds < 60 
 * Return:
 *     number of seconds in the interval
 */
int time_to_sec(int hours, int minutes, int seconds)
{
    
    hours = 60 * 60 * hours;
    minutes = 60 * minutes;
    
    int sum = hours+minutes+seconds;
    
    return sum;
    
}

/* Print a formatted representation of the calculation
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Postcondition:
 *     Function will write the calculation to standard output.
 *
 * Tips: 1 hour = 3600 seconds
 *       1 min = 60 seconds
 *
 */
int format_seconds(unsigned int hours, unsigned int minutes,
        unsigned int seconds)
{
    int total = time_to_sec(hours, minutes, seconds);
    
   printf("%d hours, %d minutes and %d seconds is equal to %d seconds. \n", hours, minutes, seconds, total);
    
    return 0;
}

int main(void)
{
    //v the answer is 15200
    format_seconds(4, 13, 20);
    //v the answer is 28800
    format_seconds(8, 0, 0);
    //v the answer is 5400
    format_seconds(1, 30, 0);
    return 0;
}
