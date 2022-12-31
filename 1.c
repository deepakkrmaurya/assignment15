/*1. Write a function to find the greatest number from the given array of any size. (TSRS)*/
#include<stdio.h>
int  greatest(int a[],int size)
{   
    int i,max=0;
    for ( i = 0; i < size; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int a[100],size,i;
    printf("inter thr size\n");
    scanf("%d",&size);
    printf("inter the %d element\n",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("greatest=%d",greatest(a,size));
    return 0;

}