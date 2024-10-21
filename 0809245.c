#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

// Напишите алгоритм проверки баланса скобок в исходной строке (т.е. число открывающих скобок равно числу закрывающих и выполняется правило вложенности скобок). Скобки бывают только одного типа.

// UPD: Из условия задачи, скобки одного типа, но не сказано какого. Т.е. либо только круглый, либо квадратный и тд. В такой трактовке условия, код работает корректно

int bracketCheck(char *localString) {
    int bracketsBalance = 0;
    for (int i = 0; i < strlen(localString); i++) {
        char currentChar = localString[i];
        if (currentChar == '(' || currentChar == '{' || currentChar == '[') {
            bracketsBalance++;
        }
        if (currentChar == ')' || currentChar == '}' || currentChar == ']') {
            bracketsBalance--;
        }
        if (bracketsBalance < 0 || currentChar == 0) {
            break;
        }
    }
    return bracketsBalance == 0;
}

int main()
{
    size_t size = 16;
    char *inputString = malloc(size * sizeof(char)); 
    getline(&inputString, &size, stdin);

    printf("%d", bracketCheck(inputString));
    return 0;
}
