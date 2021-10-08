#include<stdio.h>
#include<math.h> 
// bingung saya yang pembagian 
int main(){
    int a,s,t,i,k,l,j,y;
    int d = 0,h = 1,u = 0;
    printf("1 untk perkalian \n");
    printf("2 untuk pembagian \n");
    printf("3 untuk pangkat \n");
    printf("input56: ");
    scanf("%d",&a); 
    if (a == 1){ 
    printf("input: ");
    scanf("%d",&t);
    printf("input2: ");
    scanf("%d",&s);
    for(i=1;i<=s;i++){
        d += t;
    } 
    printf("hasli: %d",d); 
}
     
    if(a == 2){
    printf("input: ");
    scanf("%d",&k);
    printf("input2: ");
    scanf("%d",&l);
    while(k != 0){
        u++;
        k =k-l;
    }
    printf("hasil %d",u);
}   
    if(a == 3){
    printf("input: ");
    scanf("%d",&j);
    printf("input pangkat: ");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        h = h * j;
    }
      printf("hasli: %d",h);
}

    return 0;

}