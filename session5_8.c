#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int a,b;
int bcnn(int a, int b){
  int bc=fmax(a,b);
  while(1){
    if(bc%a==0&&bc%b==0)break;
    bc++;
  }
  return bc;
}
int main()
{
    scanf("%d%d",&a,&b);
    printf("%d",bcnn(a,b));
}
