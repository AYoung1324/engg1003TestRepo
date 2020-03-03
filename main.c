#include <stdio.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");                              //k is an integer
    scanf("%f", &x);
    y = (x + 24)/(x - 1);                   //input a number
    printf("y: %f\n", y);     // %d formts an integer
    return 0;
}
