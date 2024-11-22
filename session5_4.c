#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
int main()
{
    scanf("%lld",&n);
    printf("bang cuu chuong so %lld:\n",n);
    for(int i=1;i<=10;i++){
      printf("%d x %d = %d\n",n,i,n*i);
    }
}