#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int n=314,tg;
int main()
{
    do{
      printf("Nhap so nguyen");
      scanf("%d",&tg);
      if(tg!=n)printf("Hay thu lai");
    }while(tg!=n);
    return 0;
}