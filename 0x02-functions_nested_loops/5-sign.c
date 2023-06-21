#include "main.h"

/*
 * printint - Is the function name
 *
 * @num: is the paramenter
 */

void printint(int num)
{
    if (num < 0)
    {
        putchar('-');
        num = -num;
    }

    if (num == 0)
    {
        putchar('0');
    }
    else
    {
        int reversenum = 0;
        while (num != 0)
        {
            reversenum = reversenum * 10 + num % 10;
            num /= 10;
        }

        while (reversenum != 0)
        {
            int digit = reversenum % 10;
            putchar(digit + '0');
            reversenum /= 10;
        }
    }
}

/**
 * msg - is the function name
 *
 * @ch: is the parameter
 */
void msg(const char *ch)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        putchar(ch[i]);
        i++;
    }
}

/**
 * num - is the funtion nme
 *
 * @n: is the parameter
 *
 * Return: -1 (negativ), 0 (zero), 1 (Positive)
 */
int num(int n)
{
    if (n < 0)
    {
        printint(n);
        putchar(' ');
        const char *ch = "is less than zero";
        msg(ch);
        return -1;
    }
    else if (n == 0)
    {
        printint(n);
        putchar(' ');
        const char *ch = "is zero";
        msg(ch);
        return 0;
    }
    else
    {
        printint(n);
        putchar(' ');
        const char *ch = "is greater than zero";
        msg(ch);
        return 1;
    }
}

/**
 * main - is the main function call
 *
 * Return: 0 Alwys (Success)
 */
int main(void)
{
    int r;
    scanf("%d", &r);
    num(r);
    
    return 0;
}
