#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num/2)*2==num){
        printf("The number is even.\n");
    }
    else{
        printf("The number is odd.");
    }
}