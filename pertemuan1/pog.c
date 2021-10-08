#include<stdio.h>
#include<math.h>

int main(){
    float a, b, t, luas;
    printf("nilai A = ");
    scanf("%f",&a);
    printf("nilai B = ");
    scanf("%f",&b);
    printf("nilai T = ");
    scanf("%f",&t);
    luas = 0.5*(a+b)*t;
    printf("hasil= %f",luas);
    return 0;

}