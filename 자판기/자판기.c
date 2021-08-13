#include <stdio.h>
#define A 100
#define B 500
#define C 1000
#define D 5000
#define E 10000
#define F 50000
int money = 0;
int remain = 0;
int choice; //물건의 번호
<<<<<<< HEAD
int amount; //물건 수량 123
=======
int amount; //물건 수량 
>>>>>>> 2340fdfea81488f6e661dfa235ed33179a0720f6
char exit;
int a = 1;


/* 1. 메인메뉴(여기서 메뉴판을 보여줌)
   2. 돈을 넣는다.
   3. 물건 고름. 
        돈이 있는지 우선 판단
        if yes ㅡ> 4번
        if no ㅡ> 돈 없음
   4  잔돈회수.
*/
int Moeny_count() //돈을 넣는다
{
    
    printf("\n1.A(100원)    2.B(500원)    3.C(1000원)\n\n4.D(5000원)   5.E(10000원)  6.F(50000원)\n\n투입한 돈:%d    남은 돈:%d\n", money, remain);
    printf("얼마를 투입하시겠습니까? ");
    scanf_s("%d", &money);
    if (money == 0)
    {
        printf("ㅋㅋ\n");
        scanf_s("%d", &money);
    }

    

    return 0;

}
int MainMeue() //물건 구매 
{
    while (money != 0)
    {
        printf("\n구매할 물건의 번호를 입력하세요: ");
        
        scanf_s("%d", &choice);
        
        switch (choice)
        {
        case 1:
            printf("\n몇개를 구매하시겠습니까? ");
            printf("\n투입한 돈:%d    남은 돈:%d\n", money, remain);
            scanf_s("%d", &amount);
            if (money - amount * A < 0)
            {
                printf("\n돈이 부족합니다.\n");
                continue;
            }
            else
            {   
                money = money - amount * A;
                
                break;
            }
        case 2:
            printf("\n몇개를 구매하시겠습니까? ");
            printf("\n투입한 돈:%d    남은 돈:%d\n", money, remain);
            scanf_s("%d", &amount);
            if (money - amount * B < 0)
            {
                printf("돈이 부족합니다.\n");
                continue;
            }
            else
            {
                money = money - amount * B;
                break;
            }
        case 3:
            printf("\n몇개를 구매하시겠습니까? ");
            printf("\n투입한 돈:%d    남은 돈:%d\n", money, remain);
            scanf_s("%d", &amount);
            if (money - amount * C < 0)
            {
                printf("돈이 부족합니다.\n");
                continue;
            }
            else
            {
                money = money - amount * C;
                break;
            }
        case 4:
            printf("\n몇개를 구매하시겠습니까? ");
            printf("\n투입한 돈:%d    남은 돈:%d\n", money, remain);
            scanf_s("%d", &amount);
            if (money - amount * D < 0)
            {
                printf("돈이 부족합니다.\n");
                continue;
            }
            else
            {
                money = money - amount * D;
                break;
            }
        case 5:
            printf("\n몇개를 구매하시겠습니까? ");
            printf("\n투입한 돈:%d    남은 돈:%d\n", money, remain);
            scanf_s("%d", &amount);
            if (money - amount * E < 0)
            {
                printf("돈이 부족합니다.\n");
                continue;
            }
            else
            {
                money = money - amount * E;
                break;
            }
        case 6:
            printf("\n몇개를 구매하시겠습니까? ");
            printf("\n투입한 돈:%d    남은 돈:%d\n", money, remain);
            scanf_s("%d", &amount);
            if (money - amount * F < 0)
            {
                printf("돈이 부족합니다.\n");
                continue;
            }
            else
            {
                money = money - amount * F;
                break;
            }
        default:
            printf("잘못된 입력입니다.\n");
            break;

        }
       
        
    }
    
    
    return 0;
}
int main()

{
    Moeny_count();
    MainMeue();
    
    return 0;
}
