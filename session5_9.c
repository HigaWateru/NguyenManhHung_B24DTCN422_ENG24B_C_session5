#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
double a,b,c;
int d;
int main()
{
  do{
    printf("MENU\n1.Nhap 3 so\n2.Tong 3 so\n3.Trung binh cong 3 so\n4.So nho nhat\n5.So lon nhat\n6.Thoat\n");
    scanf("%d",&d);
    switch(d){
        case 1:
            printf("Nhap 3 so: ");
            scanf("%lf%lf%lf",&a,&b,&c);
            break;
        case 2:
            printf("%.0lf\n",a+b+c);
            break;
        case 3:
            printf("%.2lf\n",(a+b+c)/3);
            break;
        case 4:
            printf("%.0lf\n",fmin(a,fmin(b,c)));
            break;
        case 5:
            printf("%.0lf\n",fmax(a,fmax(b,c)));
        break;
        case 6: printf("Exit\n");
    }
  }while(d!=6);
}
