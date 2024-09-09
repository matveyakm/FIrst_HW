#include <stdio.h>
//Напишите программу, считающую количество нулевых элементов в массиве
int main() {
    int IntArr[] = {0,0,2,350,0,5};
    int zero_counter = 0;
    for(int i = 0; i < sizeof(IntArr)/sizeof(IntArr[0]);i++)
    {
        if (IntArr[i] == 0)
        {
            zero_counter++;      
        }
    }   
    printf("Count of '0' is %d",zero_counter);
    return 0;
}
