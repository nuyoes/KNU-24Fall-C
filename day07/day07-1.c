#include <stdio.h>

int main(){
    int input, i, j, k;

    printf("피라미드를 몇 층 쌓을까요?: ");
    scanf("%d", &input);

    for(i=0;i<input;i++){
        for(j=0;j<input-i;j++){
            printf(" ");
        }
        for(k=0;k<i*2+1;k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}