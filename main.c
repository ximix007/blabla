#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, j;
    int b = 1000000000;
    printf("vvedite kolichestvo chisel");
    scanf("%d", &n);
    int a[n];
    int i=0;
    for(;i<n;i++)
    {
        printf("vvetdite chislo %d\n", i+1);
        scanf("%d", &a[i]);
    }
    i=0;
    for(;i<n;i++)
        {
            if(b>a[i])
            {
                c = i;
                b = a[i];
            }
        }
    printf("nomer minimuma%d\n", c+1);
    for(i = 0; i < n - 1;i++)
    {
        for(j = c + 1; j < n-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
        }

    }
    i=0;
    for(;i<n;i++)
    {
        printf("chislo %d \n %d \n", i+1, a[i]);
    }
}
