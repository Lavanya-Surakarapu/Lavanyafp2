#include <stdio.h>
void dosquare(int a,int b) {
    int result;
    result=(a*a)+(b*b)+(2*(a*b));
    printf("%d\n",result);
}
int main(){
    dosquare(10,20);
    dosquare(5,6);
    dosquare(21,3);
    return 0;
}