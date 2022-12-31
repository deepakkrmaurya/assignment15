/*10. Write a function in C to count the frequency of each element of an array.*/
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,1,2,3,4,5,8};
    int i;
    int hash[100]={0};
    for (size_t i = 0; i < 10; i++)
    {
        hash[a[i]]++;
   }
   for (size_t i = 0; i < 100; i++)
   {
      if(hash[i]==2)
      {
        printf("%d--->%d\n",i,hash[i]);
      }
   }
   
    
}