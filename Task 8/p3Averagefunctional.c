#include <stdio.h>
void Avg(int a,int b,int c) {
    int result;
    result=(a+b+c)/3;
    printf("%d\n",result);
}
int main(){
    Avg(10,20,30);
    Avg(5,6,7);
    Avg(21,3,3);
    return 0;
}