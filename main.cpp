#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void bubblesort(int *a, int n)
{
    int numofcomp=0;
    int numofinv=0;
    int i;
    while(n)
    {
        n--;
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1])
            {
                swap(&a[i],&a[i+1]);
                numofinv++;
            }
            numofcomp++;
        }
    }
    printf("число сравнений=%d, ",numofcomp);
    printf("число перестановок=%d",numofinv);
}


int main()
{
    int n, i, *a;
    scanf("%d", &n);
    a=(int*) malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
       scanf("%d", &*(a+i));
    }
    bubblesort(a,n);
    return 0;
}
