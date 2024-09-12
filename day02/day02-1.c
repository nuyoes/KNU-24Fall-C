#include <stdio.h>

int main(){
    int n;
    double i, j;

    printf("원하는 기능을 선택하세요.\n");
    printf("1.더하기 / 2.빼기 / 3.곱하기 / 4.나누기: ");
    scanf("%d", &n);
    printf("연산할 숫자를 입력하세요: ");
    scanf("%lf %lf", &i, &j);

    if(n==1) printf("%lf + %lf = %lf", i, j, i+j);
    else if(n==2) printf("%lf - %lf = %lf", i, j, i-j);
    else if(n==3) printf("%lf * %lf = %lf", i, j, i*j);
    else if(n==4) printf("%lf / %lf = %lf", i, j, i/j);
    else printf("유효하지 않은 연산입니다. 프로그램을 종료합니다.");
    
    return 0;
}