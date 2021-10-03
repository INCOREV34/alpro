#include<stdio.h>
#include<math.h> 

int main(){
    int a = 0;
    int r,b,c,d,f,g ,t,h ,m ,i,gay;
    printf("masukan digit: ");
    scanf("%d",&a);
    r = a / 512 %2;
    b = a / 256 %2;
    c = a / 128 %2;
    d = a / 64 %2;
    f = a / 32 %2;
    g = a / 16 %2;
    t = a / 8 %2;
    h = a / 4 %2;
    m = a / 2 %2;
    i = a / 1 %2;
    gay = r*1000000000 + b*100000000 + c*10000000 +d*1000000 + f*100000 + g*10000 + t*1000 + h*100 + m*10 + i;
    printf("HASI: %d",gay);
    return 0;
}

