#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Заданы две строки: S и S1. Найдите количество вхождений S1 в S как подстроки.

int count(char ex[], char str[]) {
    int globalCounter = 0;
    int sizeofEx = strlen(ex);
    int sizeofStr = strlen(str);
    int *inclusions = malloc(sizeofEx * sizeof(char));
    for (int i = 0; i < sizeofStr;i++) {
        int w = 0;
        if (str[i] == ex[0] && sizeofEx > 1) {
            while (inclusions[w] != 0) {
                w++;
            }
            inclusions[w] = 1;
        } else {
            w = -1;
        }
        for (int j = 0; j < sizeofEx; j++) {
            if (j == w) continue;   
            if (str[i] == ex[inclusions[j]] && (inclusions[j] != 0 || sizeofEx == 1)) {
                inclusions[j]++;
                if (inclusions[j] == sizeofEx) {
                    inclusions[j] = 0;
                    globalCounter++; 
                }
            }
            else {
                inclusions[j] = 0;
            }
        }  
    }
    return globalCounter;
}

int main()
{
    char exampleStr[] = "10101";
    char str[] = "00010100101010101"; 
    printf("%d", count(exampleStr, str));
    return 0;
}
