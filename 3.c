/*3. Write a function to sort an array of any size. (TSRN)*/
#include<stdio.h>
int sort(int a[],int size)
{
    int i,j,b;
    for ( i = 0; i < size; i++)
    {
        for (size_t j = i+1; j < size; j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
        
    }
    for ( i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
int main()
{
    int a[100],i;
    int size;
    printf("inter the size\n");
    scanf("%d",&size);
    printf("inter thr %d element\n",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);

    }
    sort(a,size);
    
    
    return 0;
}