/*6. Write a function in C to read n number of values in an array and display it in reverse
order.*/
#include<stdio.h>
void reverse(int a[],int size)
{
    int i;
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ",size-i);
    }
    
}
int main()
{
    int i,a[100],size;
    printf("inter thr size\n");
    scanf("%d",&size);
    printf("inter thhe %d element\n",size);
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,size);
    return 0;
}