/**
 * C program to print all Perfect numbers between 1 to n 
 */

#include <stdio.h>

int main()
{
    int i, j, start, end, sum;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All Perfect numbers between %d to %d:\n", start, end);
    
    /* Iterate from start to end */
    for(i=start; i<=end; i++)
    {
        sum = 0;

        /* Check whether the current number i is Perfect number or not */
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
 
        /* If the current number i is Perfect number */
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
