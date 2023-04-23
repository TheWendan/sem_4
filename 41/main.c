#include <stdio.h>
#include <math.h>
#include "41.h"
#define LEN1 30

int main()
{
    char arr_hex[LEN1] = {'0'};
    scanf("%s", arr_hex); // считываем массив символов
    printf("decimal number = %d", reverse(arr_hex));
    return 0;
}