#include "NumClass.h"
#include <math.h>

int numberDigits(int number)
{
    int i, count = 0;
    while (number != 0)
    {
        count++;
        number /= 10;
    }
    return count;
}

int isPalindrome(int number)
{
    int i, half, numberLength = numberDigits(number), reverse = 0, current = number;
    if (numberLength == 1)
    {
        return true;
    }
    if (numberLength % 2 == 0)
    {
        half = numberLength - numberLength / 2;
    }
    else
    {
        half = numberLength - numberLength / 2 - 1;
    }
    for (i = numberLength - 1; i > numberLength / 2; i--)
    {
        reverse += (current % 10) * pow(10, half - 1);
        half--;
        current /= 10;
    }
    if (numberLength % 2 == 0)
    {
        if (current == reverse)
        {
            return true;
        }
        return false;
    }
    else
    {
        current /= 10;
        if (current == reverse)
        {
            return true;
        }
        return false;
    }
}