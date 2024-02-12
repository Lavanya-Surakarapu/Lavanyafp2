#include <stdio.h>
void toBiggest(int a,int b){
int a,b,res;
a=100;
b=200;
res=a>b?a:b;
printf("%d\n",res);
}
int main(){
toBiggest(2,5);
toBiggest(9,8);
toBiggest(6,9);

return 0;
}