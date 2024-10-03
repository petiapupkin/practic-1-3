#include <iostream>

int main() {
    int i,j;
    int d;
    int min,max;
    max = 0;
    min = 100000;
    int maxx;
    maxx= 0;
    
    printf("\nВведите длинну массива: ");
    scanf("%d", &d);
    
    int a[d];  //обьявление
    int k[d];

    for (i = 0; i < d ; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < d ; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    
    for (i = 0; i < d ; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    
    for (j = 0; j < d; j++)
    {
        for (i = 0; i < d ; i++)
        {
            if (a[i] >= maxx)
            {
            maxx = a[i];
            a[i] = 0;
            }
        }
        k[j] = maxx;
        maxx = 0;
    }
    for (i = 0; i < d ; i++)
    {
        printf("%d ", k[i]);
    }
    printf("\nмаксимум: %d", max);
    printf("\nминимум: %d", min);
    return 0;
}