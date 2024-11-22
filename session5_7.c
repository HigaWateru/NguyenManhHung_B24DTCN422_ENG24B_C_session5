#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int a,b;
int ucln(int a, int b){
  if(a==0||b==0)return a+b;
  for(int i=fmin(a,b);i>=1;i--){
    if(a%i==0&&b%i==0)return i;
  }
  return 1;
}
int main()
{
    scanf("%d%d",&a,&b);
    printf("%d",ucln(a,b));
}
