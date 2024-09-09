#include <stdio.h>
#include <string.h>
//Напишите алгоритм проверки баланса скобок в исходной строке (т.е. число открывающих скобок равно числу закрывающих и выполняется правило вложенности скобок). Скобки бывают только одного типа.
int bracketCheck(char inp[])
{
    int bracketsBalance = 0;
    for(int i = 0; i < 128; i++)
    {
        char currentChar = inp[i];
        printf("%c %d\n", currentChar, currentChar);
        if (currentChar == 40 | currentChar == 123 | currentChar == 91)
        {
            bracketsBalance++;
        }
        if (currentChar == 41 | currentChar == 125 | currentChar == 93)
        {
            bracketsBalance--;
        }
        if (bracketsBalance < 0 | currentChar == 0) {break;}
    }
    return (bracketsBalance == 0);
}

int main()
{
    char inp[128];
    fgets(inp, sizeof(inp), stdin);
    printf("%d",bracketCheck(inp));
    return 0;
}