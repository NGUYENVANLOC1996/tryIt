#include<stdio.h>
#include<conio.h>
int main(void)
{ int n,i,S;

 printf("nhap so n ");
 scanf("%d",&n);
 S=0;
  for(i=1;i<=n;++i)
    S+=i;
printf("tong can tim la %d \n",S);
getch();
return 0;
}
