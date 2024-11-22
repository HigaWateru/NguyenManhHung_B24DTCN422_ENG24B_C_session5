#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long n;
int main()
{
  scanf("%lld",&n);
  while(n>0){
    printf("%d ",n%10);
    n/=10;
  }
}
