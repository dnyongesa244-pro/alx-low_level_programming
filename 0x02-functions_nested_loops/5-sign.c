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
        _putchar('-');
        num = -num;
    }

    if (num == 0)
    {
        _putchar('0');
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
            _putchar(digit + '0');
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
        _putchar(ch[i]);
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
int print_sign(int n)
{
    if (n < 0)
    {
        printint(n);
        _putchar(' ');
        const char *note = "is less than zero";
        msg(note);
        return -1;
    }
    else if (n == 0)
    {
        printint(n);
        _putchar(' ');
        const char *note = "is zero";
        msg(note);
        return 0;
    }
    else
    {
        printint(n);
        _putchar(' ');
        const char *note = "is greater than zero";
        msg(note);
        return 1;
    }
}
