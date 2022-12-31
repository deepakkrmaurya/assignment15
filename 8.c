/*8. Write a function in C to print all unique elements in an array.*/
#include<stdio.h>
unique(int a[],int size)
{
    int i;
    int hash[100]={0};
    for (size_t i = 0; i < size; i++)
    {
        hash[a[i]]++;

    }
    for (size_t i = 0; i < 100; i++)
    {
        if(hash[i]==1)
        {
          printf("%d",i);
        }
    }
    return 0;
}
int main()
{
    int a[100],i,size;
    printf("inter the size\n");
    scanf("%d",&size);
    printf("inter the %d element\n",size);
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    unique(a,size);
    
}