/*5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
#include<stdio.h>
int duplicate(int a[],int size)
{
    int i,hash[100]={0};
    for (size_t i = 0; i < size; i++)
    {
        hash[a[i]]++;
    }
    for (size_t i = 0; i <100; i++)
    {
        if(hash[i]==2)
        {
        printf("%d--->%d\n",i,hash[i]);
        }
    }
    
}
int main()
{
    int i,a[100],size;
    printf("inter the size\n");
    scanf("%d",&size);
    printf("inter the %d element\n",size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
     duplicate(a,size);
      
      return 0;
}

