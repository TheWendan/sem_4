#include <stdio.h>
#include <math.h>
#include "41_2.h"
#define LEN2 30

int length(char arr[])
{
    int len = 0;
    for(int i=0; (arr[i] != '\0') || (arr[i] != 0); i++)
        len++;
    return len;
}


int reverse(char arr_hex[])
{
    int len_hd; int arr_dec[LEN2] = {0}; int summ = 0;

    len_hd = length(arr_hex); // находим длину массива символов

    for(int i = 0; i <= len_hd - 1; i++) 
    {
        if((65 <= arr_hex[i]) && (arr_hex[i] <= 70)) // находим десятичный аски код
            arr_dec[i] = arr_hex[i] - 55; // отнимаем значение так, чтобы оно соответсвтвовало 16 -> 10 системе
        if((48 <= arr_hex[i]) && (arr_hex[i] <= 57))
            arr_dec[i] = arr_hex[i] - 48;
        if((97 <= arr_hex[i]) && (arr_hex[i] <= 102))
            arr_dec[i] = arr_hex[i] - 87;
    }

        for(int i = 0;i <= len_hd - 1;i++) //складываем десятичные значения чисел
    {    
        summ += arr_dec[i] * pow(16, len_hd - 1 - i);
    }
    return(summ);
}

int quanity(int a) // число нечетных бит
{
    short quanity = 0; short count = 0;
    while(a != 0)
    {
        a = a >> 1;
        quanity++;
    }
    while(quanity > 0)
    {
        quanity -= 2;
        count++;
    }
    return count;
}
