
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int a,b,c,d,e,summ, razn, proizv;
    printf("\nвведите 5 чисел ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    summ = a+b+c+d+e;
    razn = a-b-c-d-e;
    proizv = a*b*c*d*e;
    printf("\n%d %d %d", summ,razn,proizv);
    printf("\n%d %d %d %d %d", (int)sizeof(a), (int)sizeof(b), (int)sizeof(c), (int)sizeof(d),  (int)sizeof(e));
    a = a%10;
    b = b%10;
    c = c%10;
    d = d%10;
    e = e%10;
    printf("\n%d %d %d %d %d", a,b,c,d,e);
    return 0;
}
