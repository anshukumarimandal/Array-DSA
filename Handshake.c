/*In a room there are n number of persons inside everyone wabts to give shake hand to everyone then how many total number of shake hands will be there*/
//HAND SHAKE PROBLEM 

#include <stdio.h>
int main() {
  int n;
  int sum=0;
  
    printf("Enter the n value:");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        sum=sum+i;
    }
    printf("total nunber of handshakes is %d",sum);
return 0;
}
    