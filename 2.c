/*2. Write a function to find the smallest number from the given array of any size. (TSRS)*/
#include<stdio.h>
int smallest(int a[],int size)
{
    int i,small=a[0];
    for ( i = 0; i <size; i++)
    {
       if(small>a[i])
       {
           small=a[i];
       } 
    }
    return small;
}
int main()
{
    int a[100],i;
    int size;
    printf("inter the size\n");
    scanf("%d",&size);
    printf("inter the %d element\n",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("smallest number=%d",smallest(a,size));
    return 0;
}