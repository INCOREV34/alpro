#include<stdio.h>
#include<math.h>

int main(){
    int sum, add, add2,add3,add4,mas;
    printf("input1: ");
    scanf("%d",&add);
    printf("input2: ");
    scanf("%d",&add2);
    add = add << 1;
    add2 = add2 >> 2;
    sum = add ^ add2;
    printf("hasil: %d",sum);
    add3 = add;
    add4 = add2;
    add3 = add3 >> 3;
    add4 = add4 << 3;
    mas = add3 | add4;
    printf("  hasil jika dibalik: %d\n",mas);

    return  0;
}