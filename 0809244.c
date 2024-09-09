#include <stdio.h>
//Подсчитать число «счастливых билетов» из шести цифр, всего существующих в мире (билет считается «счастливым», если сумма первых трёх цифр его номера равна сумме трёх последних). Считать способом, предложенным на паре — посчитать количество трёхзначных чисел со всеми возможными суммами цифр через массив, возвести в квадрат и сложить.
int main()
{
    int countOfVariants[28] = {0};
    for(int x = 0; x < 10; x++)
    {
        for(int y = 0; y < 10; y++)
        {
            for(int z = 0; z < 10; z++)
            {
                countOfVariants[x+y+z]++;
            }
        }
    }
    double resultSum = 0;
    for(int i = 0; i < 28; i++)
    {
        resultSum += countOfVariants[i]*countOfVariants[i];
        countOfVariants[i] = 0;
    }
    printf("Answer: %10.f",resultSum);
    return 0;
}