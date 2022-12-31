/*7. Write a function in C to count a total number of duplicate elements in an array.(Means
elements that occurs 2 times in an array)*/
#include<stdio.h>
duplicats(int a[],int size)
{
    int i, sum=0;
    int hash[100]={0};
    for (size_t i = 0; i < size; i++)
    {
        hash[a[i]]++;
    }
    for (size_t i = 0; i < 100; i++)
    {
        if(hash[i]==2)
        {
            sum++;
        printf("%d--->%d\n",i,hash[i]);
        }
        
    }
     
     printf("total number of duplicate elements-->%d\n",sum);
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
    duplicats(a,size);
    
}