#include<stdio.h>
#include<math.h>

int main(){
    int sum, add, add2;
    printf("input1: ");
    scanf("%d",&add);
    printf("input2: ");
    scanf("%d",&add2);
    add = add << 1;
    add2 = add2 >> 2;
    add = add >> 3;
    add2 = add2 << 3;
    sum = add ^ add2;
    printf("hasil: %d",sum);
    return  0;
}