#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n); //dynamic array allocation
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);   
    }
    for(int i=n-1; i>-1; i--)
    {   
        printf("%d ",a[i]);
    }
    return 0;
}