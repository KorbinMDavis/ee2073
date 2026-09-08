///////////////////////////////////////////////////////////////
//  
//  EE 2073
//
//  Homework 3
//
//  I certify that the code below is my own work without AI assistance.
//  Korbin Davis xya241

#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif // _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

// Function to return the square root of a double (x) as a double using Heron's Method
double heronSQRT(double x) {
    double epsilon = 0.0001;
    double y = x/2.0;

    while(fabs(y*y - x) > epsilon) {
        y = .5 * ((x / y) + y);
    }

    return y;
}

int main (void) {
    printf("The square root of 32 using Heron's Method is %.3f.\n", heronSQRT(32.0));
    printf("The square root of 130 using Heron's Method is %.3f.\n", heronSQRT(130.0));
    printf("The square root of 195 using Heron's Method is %.3f.\n", heronSQRT(195.0));
    printf("The square root of 49 using Heron's Method is %.3f.\n", heronSQRT(49.0));

    return 0;
}
