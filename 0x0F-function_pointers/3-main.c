#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    int x = atoi(argv[1]);
    int y = atoi(argv[3]);

    int (*op_func)(int, int) = get_op_func(argv[2]);

    if (!op_func)
    {
        printf("Error\n");
        return (99);
    }

    if ((*argv[2] == '/' || *argv[2] == '%') && y == 0)
    {
        printf("Error\n");
        return (100);
    }

    int result = op_func(x, y);
    printf("%d\n", result);

    return 0;
}
