/*1에서부터 6까지 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다.
aㅅ. 같은 눈이 3개가 나오면 10000원+(같은 눈의 숫자)*1000
b. 같은 눈이 2개만 나오는 경우에는 1000+(같은 눈의 숫자)*100
c. 세 개 다 다른 경우에는 그 중 가장 큰 눈에 100을 곱한 상금

출력예시 1
3 3 6 -> 1300
출력예시 2
2 2 2 ->12000
출력예시 3
6 2 5 -> 600
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int dice1, dice2, dice3, money;
    printf("");
    scanf("%d %d %d", &dice1, &dice2, &dice3);

    if (dice1 == dice2 && dice2 == dice3 && dice1 == dice3)
    {
        money = 10000 + dice1 * 1000;
        printf("%d", money);
    }
    else if (dice1 == dice2 || dice1 == dice3 || dice2 == dice3)
    {
        if (dice1 == dice2 && dice3 > dice1)
        {
            money = 1000 + 100 * dice1;
            printf("%d", money);
        }
        else if (dice1 == dice3 && dice2 > dice3)
        {
            money = 1000 + 100 * dice1;
            printf("%d", money);
        }
        else if (dice1 > dice2 && dice2 == dice3)
        {
            money = 1000 + 100 * dice2;
            printf("%d", money);
        }
    }
    else if (dice1 > dice2 && dice1 > dice3)
    {
        money = 100 * dice1;
        printf("%d", money);
    }
    else if (dice2 > dice1 && dice2 > dice3)
    {
        money = 100 * dice2;
        printf("%d", money);
    }
    else
    {
        money = 100 * dice3;
        printf("%d", money);
    }
    print("HELLO");
    return 0;
}

//이게 오늘 수업 퀴즈에 나왔던 문제고 밑에 풀이는 제가 퀴즈 때 풀었던 거 복기해서 다시 푼 거거든요