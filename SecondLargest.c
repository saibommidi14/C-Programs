#include<stdio.h>
void main(){

    int a,b,c;
    printf("Enter the values of a,b and c : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        if(b>c){
            printf("%d is the second largest number.",b);

        }
        else{
            printf("%d is the second largest number.",c);
        }
    }
    else if(b>a && b>c){
        if(a>c){
            printf("%d is the second largest number.",a);

        }
        else{
            printf("%d is the second largest number.",c);
        }
    }
      else {
        if(b>a){
            printf("%d is the second largest number.",b);

        }
        else{
            printf("%d is the second largest number.",a);
        }
    }
}
