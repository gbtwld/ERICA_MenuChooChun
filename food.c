#include <stdio.h>

int main(){
    int a,b,c;
    printf("점심을 추천받으시겠습니까? (Y/N)\n Y는 1 N은 2");
    scanf("%d", &a);
    if(a == 1){
        printf("점심에 사용할 비용을 입력하세요. (4000원 이상 부터 입력바람):   \n");
        scanf("%d", &b);
        if(b < 4000){
            printf("다시 시작해주세요\n");
            return 0;
        }
        else if(b <=4000){
            printf("1.알촌  2.행복한 짬뽕  3.몰ㄹㅏ\n");
            scanf("%d",&c);
            switch (c) {
                case 1:
                    printf("1. 약매 2. 중매 3. 등등\n");
                    break;
                case 2:
                    printf("그돈이면 그냥 짜장면이나 먹어\n");
                    break;
                    
                default:
                    printf("다시 시작해 주세요\n");
                    break;
            }
            }
            else{
                printf("그냥 먹지마\n");
            }
        }
    else if(a == 2){
        printf("사용해주셔서 감사합니다.\n");
        return 0;
    }
    else{
        printf("다시 시작해주세요\n");
        return 0;
    }
}
