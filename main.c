#include "header.h"
//#include <stdio.h>

void main()
{
    // initialization
    int a[10] = {3,6,8,2,5,1,9,4,7,0};
    int n;

    // get user's input
    printf("Please input a number: ");
    scanf("%d", &n);

    // create an array 'b' that contains both the array 'a' and user input 'n'
    int len_a = sizeof(a)/sizeof(int);
    int b[11];
    int len_b = sizeof(b)/sizeof(int);
    int result = copyArray(b, len_b, a, len_a);
    if(result == -1)
    {
        printf("Cannot proceed this program\n");
        return;
    }
    b[10] = n;

    // print the created array 'b'
    printf("Input Array\n");
    printArray(b, len_b);

    // calcualte the variance over all elements in the array 'b'
    double var = calVariance(b, len_b);
    printf("The variance is: %f\n", var);

    // sort the array
    sortArray(b, len_b);
    printf("Sorted Array\n");
    printArray(b, len_b);

    // get user's input
    int m;
    printf("Please input a number: ");
    scanf("%d", &m);

    // check if 'm' is in the proper range
    result = checkInputRange(m, len_b);
    if (result == -1)
    {
        printf ("The input is not in a proper range");
        return;
    }

    // find the 'm'-th highest value in the array 'b'
    result = findHighest(m, b, len_b);
    printf("The %d-th highest value is: %d\n", m, result);

    return;
}
