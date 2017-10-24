#include <stdio.h>
#include <stdlib.h>

int partition(int a[],int low,int high)
{
    int key=a[low];

    while(low < high){
        while(low < high && a[high] >= key)
            high--;
        if(low < high)
            a[low++] = a[high];
        while(low < high && a[low] <= key)
            low++;
        if(low < high)
            a[high--] = a[low];
    }
    a[low] = key;
    return low;
}

void quick_sort(int a[],int start,int end)
{
    int pos;

    if(start < end){
        pos = partition(a,start,end);
        quick_sort(a,start,pos-1);
        quick_sort(a,pos+1,end);
    }
}

int main()
{
    int i,n;
    int a[999];

    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    for(i=0;i < n;i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;
}
