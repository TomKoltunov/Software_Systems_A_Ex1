#include "NumClass.h"
#include <stdio.h>

int main()
{
    int first, second, smaller, bigger, i;
    scanf("%d %d", &first, &second);
    if (first < second)
    {
        smaller = first;
        bigger = second;
    }
    else
    {
        smaller = second;
        bigger = first;
    }
    printf("The Armstrong numbers are:");
    for (i = smaller; i <= bigger; i++)
    {
        if (isArmstrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Palindromes are:");
    for (i = smaller; i <= bigger; i++)
    {
        if (isPalindrome(i))
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Prime numbers are:");
    for (i = smaller; i <= bigger; i++)
    {
        if (isPrime(i))
        {
            printf(" %d", i);
        }
    }
    printf("\nThe Strong numbers are:");
    for (i = smaller; i <= bigger; i++)
    {
        if (isStrong(i))
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}