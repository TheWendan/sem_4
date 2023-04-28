#include <stdio.h>
#include <math.h>
#include "41.h"
#define LEN1 30

int main()
{
    char arr_hex[LEN1] = {'0'}; int dec_number;
    scanf("%s", arr_hex); // считываем массив символов
    dec_number = reverse(arr_hex);
    printf("decimal number = %d\n", dec_number);
    printf("Quanity odd bits = %d", quanity(dec_number));
    return 0;
}