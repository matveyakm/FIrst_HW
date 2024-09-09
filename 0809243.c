#include <stdio.h>
#include <math.h>
//Написать алгоритм нахождения неполного частного от деления a на b (целые числа), используя только операции сложения, вычитания и умножения. Убедиться, что программа корректно (в смысле определения неполного частного из википедии) работает на отрицательных значениях и выдаёт ошибку на некорректных.
int custom_sign(int InputNum)
{
    if (InputNum >= 0) {return 1;}
    return -1;
}
int abs(int InputNum)
{
    if (InputNum >= 0) {return InputNum;}
    return InputNum * (-1);
}
int ExactDivision(int Divident, int Divisor)
{
    int Quotient = 0;
    if (Divident == Divisor) {return 1;}
    if (Divisor == 0)
    {
        printf("DivisonByZero\n");
        return 0;
    }
    int result_sign = (custom_sign(Divident) * custom_sign(Divisor));
    while ((abs(Divident) > abs(Divisor)) | (Divident < 0))
    {
        Divident -= result_sign * Divisor;
        Quotient += result_sign;
    }
    printf("Remainder: %d\n",abs(Divident));
    return Quotient;
}
int main()
{
    int Dividend = -10;
    int Divisor = -3;
    printf("Result: %d", ExactDivision(Dividend,Divisor));
    return 0;
}
