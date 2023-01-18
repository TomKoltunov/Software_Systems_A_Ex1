#include "NumClass.h"

int numberLength(int number)
{
    int count = 0;
    while (number != 0)
    {
        count++;
        number /= 10;
    }
    return count;
}

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    int i, original = base;
    for (i = 1; i <= exponent; i++)
    {
        base *= original;
    }
    return base;
}

int sumArmstrong(int number)
{
    if (number > 0)
    {
        return power(number % 10, numberLength(number)) + sumArmstrong(number / 10);
    }
    return 0;
}

int isArmstrong(int number)
{
    if (number == sumArmstrong(number))
    {
        return true;
    }
    return false;
}

int reverseNumber(int number)
{
    if (number > 0)
    {
        return (number % 10) * power(10, numberLength(number) - 1) + reverseNumber(number / 10);
    }
    return 0;
}

int isPalindrome(int number)
{
    if (number == reverseNumber(number))
    {
        return true;
    }
    return false;
}