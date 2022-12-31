/*4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>
void rotation(int a[],int size ,int d)
{
        int i,x;
        for (i = 0; i <d; i++)
        {
            x=a[0];
            for (size_t i = 0; i < size; i++)
            {
                a[i]=a[i+1];
            }
            
             a[size-1]=x;
        }
        for (size_t i = 0; i <size; i++)
        {
            printf("%d ",a[i]);
        }
        
        return 0;
}
int main()
{
    int i,a[100],size,n;
    printf("inter the size\n");
    scanf("%d",&size);
    printf("inter the position\n");
    scanf("%d",&n);
    printf("inter the %d element\n",size);
    for (i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
     rotation(a,size,n);
}


