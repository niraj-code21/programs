#include <stdio.h>
void sum();
int main()
{
    sum();
    return 7;
}
void sum()
{
    int b, a[20], k, l, i, j, c;
    printf("enter the two number whoose fibonacci series you want\n");
    scanf("%d%d", &k, &l);
    printf("enter the number of fibonacci term you want to see\n");
    scanf("%d", &c);
    a[0] = k;
    a[1] = l;
    for (i = 2; i < c; i++)
    {
        for (j = i - 1; j < i; j++)
        {
            for (b = i - 2; b < j; b++)
            {
                a[i] = a[j] + a[b];
            }
        }
    }
    printf("The fibonacci series of %d and %d are as below :\n  ", k, l);
    for (i = 0; i < c; i++)
    {
        printf("%d\t", a[i]);
    }
}
