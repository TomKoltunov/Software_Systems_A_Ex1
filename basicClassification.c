#include "NumClass.h"

int isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    int i;
    for (i = 2; i * i <= number; i++) 
    {
        if (number % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int factorial(int number) 
{
    if (number == 0)
    {
        return 1;
    }
    return number * factorial (number - 1);
}

int isStrong(int number)
{
    int current = number;
    int sum = 0;
    while (current != 0)
    {
        sum += factorial(current % 10);
        current /= 10;
    }
    if (sum == number) 
    {
        return true;
    }
    return false;
}