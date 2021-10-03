#include<stdio.h>
#include<math.h>

int main(){
    int satuan, lol, lel, lul, nope,gas;
    printf("sinput: ");
    scanf("%d",&satuan);
    lol = satuan / 1000 % 10;
    lel = satuan / 100 % 10;
    lul = satuan / 10 % 10;
    nope = satuan % 10; 

    gas = (nope*1) + (lul*2) + (lel*4) + (lol*8);
    printf("hasil; %d",gas);
    return 0;

}