#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    double x = 0;
    double y = 0;
    double pi = 0;

    int count = 0, circle = 0;
    double x2, y2, xySqrt;

    srand(time(NULL));

    for(int i=1;i<=100;i++){
        while(count<10000000){
            x=(double)rand()/(double)RAND_MAX; //rand()는 최대 RAND_MAX만큼의 값만 리턴하므로 0<=x<=1
            y=(double)rand()/(double)RAND_MAX; //문제 조건: 두 난수는 0~r 범위에서 생성
            count++;

            // √x^2+y^2 구하기
            x2=pow(x,2);
            y2=pow(y,2);
            xySqrt=sqrt(x2+y2);

            // 16번째 줄 주석의 x,y 범위를 고려해 r=1이라고 가정해 작성
            if(xySqrt<1)   
                circle++;
        }
        // pi 연산할 때 circle에 double로 자료형 해결해 줘야 오류 안 뜸
        pi= ((double)circle/count) *4;

        printf("%d%%% 진행.. 원주율: %lf", i, pi);
        count = 0;
        circle = 0;

        //5% 진행될 때마다 네모가 한 칸씩 차야 됨... i를 어떻게저떻게해봐라!!
        for(int j=0;j<i/5;j++){
            printf("■"); 
        }
        for(int k=0;k<20-(i/5);k++){
            printf("□");
        }

        printf("\n");
    }

    return 0;
}