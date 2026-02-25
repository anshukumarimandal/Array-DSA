// watertank-pipeline
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
       printf("Enter the %d value:\n",(i+1));
       scanf("%d",&a[i]); 
    }
    int area=0;
    int amount=0;
    int h1,h2;
    for(int i=0;i<size-1;i++)
    {
       for(int j=i+1;j<=size-1;j++) 
       {
           if(a[i]<a[j])
         {
               amount=a[i]*(j-1);
           }
           else
         {
               amount=a[j]*(j-1);
               if(amount>area)
           {
               h1=a[i];
               h2=a[j];
               area=amount;
             }
         }
       }
    }
    printf("h1=%d\n",h1);
    printf("h2=%d\n",h2);
    printf("area=%d\n",area);
     return 0;
}