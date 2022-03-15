#include "headers/factorial.h"

long factorial(int n)
{
    if(n < 1)
    {
        return 1;
    }
    return factorial(n - 1) * n;
}
double combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}