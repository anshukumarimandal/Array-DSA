// write a program to remove duplicate values from the given array and replace them with zeroes
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter the %d value:",(i+1));
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=size-1;i++)
    {
       for(int j=i+1;j<=size-1;j++) 
       {
           if(a[i]==a[j])
           {
           a[j]=0;
           }
       }
       
    }
    for(int i=0;i<=size-1;i++)
    {
        printf("a[%d]==%d\n",i,a[i]);
    }
      return 0;
}