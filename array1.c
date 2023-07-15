#include <stdio.h>
int main ()
{
    int n,i;
    int arr[100];
    printf("enter the size of aaray:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d:\n",i+1);
        scanf("%d", &arr[i]);
    }
    printf("the elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}