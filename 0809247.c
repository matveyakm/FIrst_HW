#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Заданы две строки: S и S1. Найдите количество вхождений S1 в S как подстроки.

int count(char substring[], char string[]) {
    int globalCounter = 0;
    int sizeOfSubstring = strlen(substring);
    int sizeofStr = strlen(string);
    int *inclusions = malloc(sizeOfSubstring * sizeof(char));
    for (int i = 0; i < sizeofStr; i++) {
        int indexOfZeroFinder = 0;
        if (string[i] == substring[0] && sizeOfSubstring > 1) {
            while (inclusions[indexOfZeroFinder] != 0) {
                indexOfZeroFinder++;
            }
            
            inclusions[indexOfZeroFinder] = 1;
        } else {
            indexOfZeroFinder = -1;
        }
        for (int j = 0; j < sizeOfSubstring; j++) {
            if (j == indexOfZeroFinder) {
                continue;
            }

            if (string[i] == substring[inclusions[j]] && (inclusions[j] != 0 || sizeOfSubstring == 1)) {
                inclusions[j]++;
                if (inclusions[j] == sizeOfSubstring) {
                    inclusions[j] = 0;
                    globalCounter++; 
                }
            }
            else {
                inclusions[j] = 0;
            }
        }
    }
    free(inclusions);
    return globalCounter;
}

int main()
{
    char subString[] = "0";
    char string[] = "1111011"; 
    printf("%d", count(subString, string));
    return 0;
}
