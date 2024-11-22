#include <stdio.h>
#include<stdlib.h>
#include<string.h>
double a,b;
int tg;
int main()
{
    printf("Nhap 2 so bat ki: ");
    scanf("%lf%lf",&a,&b);
    printf("CACULATOR\n1.Tong 2 so\n2.Hieu 2 so\n3.Tich 2 so\n4.Thuong 2 so\n5.Thoat\n");
    scanf("%d",&tg);
    if(tg==1)printf("Tong 2 so la %.2lf",a+b);
    else if(tg==2)printf("Hieu 2 so la %.2lf",a-b);
    else if(tg==3)printf("Tich 2 so la %.2lf",a*b);
    else if(tg==4)printf("Thuong 2 so la %.2lf",a/b);
    else printf("Exit");
}