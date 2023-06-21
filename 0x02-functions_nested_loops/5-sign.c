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
/*
void msg(const char *ch)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        _putchar(ch[i]);
        i++;
    }
}
*/
/**
 * num - is the funtion nme
 *
 * @n: is the parameter
 *
 * Return: -1 (negative), 0 (zero), 1 (Positive)
 */
int print_sign(int n)
{
    if (n < 0)
    {
        _putchar('-');
        printint(-n);
        return -1;
    }
    else if (n == 0)
    {
        _putchar('0');
        return 0;
    }
    else
    {
        printint(n);
        return 1;
    }
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

