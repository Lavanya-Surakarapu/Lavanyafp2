#include <stdio.h>
int main(){
int n1,n2,res;
n1=100;
n2=200;
res=n1>n2?n1:n2;
printf("%d\n",res);
n1=250;
n2=300;
res=n1>n2?n1:n2;
printf("%d\n",res);
return 0;
}