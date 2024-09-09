#include <stdio.h>
//Дан массив целых чисел [x_1...x_m + n], рассматриваемый как соединение двух его отрезков: начала x_1...x_m длины m и конца x_m + 1...x_m + n длины n. Не используя дополнительных массивов, переставить местами начало и конец. Делать способом, обсуждавшимся на паре — перевернуть один фрагмент, другой, и весь массив. Нужна функция, переворачивающая данный кусок массива

void particalReverse(int Arr[],int st,int en)
{
    float mid = (float)(en+st)/2;
    for(int i = st; i < mid; i++)
    {
        printf("%d %d %f\n",i,en+st-i,mid);
        Arr[i] = Arr[i] - Arr[en+st-i];
        Arr[en+st-i] = Arr[i] + Arr[en+st-i];
        Arr[i] = Arr[en+st-i] - Arr[i];
    }
}
int main()
{
    int Arr[] = {0,1,2,3,4,5,6,7,8,9};
    int m = 3; //будем считатть, что отсчет ведется с 0
    int n = 6;
    int lenth = n+m+1;

    particalReverse(Arr,0,m);
    particalReverse(Arr,m+1,n+m);
    particalReverse(Arr,0,n+m);

    for(int i = 0; i < lenth;i++){
        printf("%d ",Arr[i]);
    }
    return 0;
}