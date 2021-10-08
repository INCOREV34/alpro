#include<stdio.h>
#include<math.h> 

int main(){
    int gup,a,total,b,next,d;
     char s[64];
    printf("pilih angka 1 untuk  SMD dengan radix dan angaka 2 untuk yang tidak degan radix \n");
    printf("pilihan: ");
    scanf("%d",&a);
    if(a == 1){
        printf("input: ");
        scanf("%d",&b);
        total = b % 10;
        next = b / 10 * pow(10,total);
        printf("hasil: %d",next);
    }
    else if(a == 2){
        printf("input: ");
        scanf("%s", s);
        d = 0;
        while (s[d] != 0) {
          if (s[d] == 'R') {
            s[d] = ',';
          }
        ++d;
        }
        printf("hasil: %s",s);
    }
    else{
        printf("ajok ngawur");
    }
    return 0;

}