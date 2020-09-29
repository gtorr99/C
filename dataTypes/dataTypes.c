#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("-------------------------------------------------- \n");
    printf("|       Variable Types x Size (Bytes)            | \n");
    printf("-------------------------------------------------- \n");
    printf("|        TYPE          |           BYTES         | \n");
    printf("-------------------------------------------------- \n");
    printf("|       char           |             %u           | \n", sizeof(char));
    printf("|       short          |             %u           | \n", sizeof(short));
    printf("|       int            |             %u           | \n", sizeof(long));
    printf("|       float          |             %u           | \n", sizeof(float));
    printf("|       long long      |             %u           | \n", sizeof(long long));
    printf("|       double         |             %u           | \n", sizeof(double));
    printf("|       long double    |             %u          | \n", sizeof(long double));
    printf("-------------------------------------------------- \n");
    return 0;
}
