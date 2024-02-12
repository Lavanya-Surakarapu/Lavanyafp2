#include <stdio.h>
void doCircle(int r) {
    int r,result;
    result=PI*(r*r);
    printf("%d\n",result);
}
int main(){
    doCircle(10);
    doCircle(5);
    doCircle(21);
    return 0;
}
