#include <stdio.h>

int main(){

    float sum = 0, count = 0, average;
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    for(int a=1; 1<number; i++){
        for(int b=2; b<=a; b++){
            if(b==a){
                sum+=1;
                count++;
            }else if(a%b==0){
                break;
            }
        }
    }
    average= sum/count;
    printf("Average= #.2f", average);
    return0;
}