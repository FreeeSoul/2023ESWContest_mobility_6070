/*1�������� 6���� ���� ���� 3���� �ֻ����� ������ ������ ���� ��Ģ�� ���� ����� �޴� ������ �ִ�.
a��. ���� ���� 3���� ������ 10000��+(���� ���� ����)*1000
b. ���� ���� 2���� ������ ��쿡�� 1000+(���� ���� ����)*100
c. �� �� �� �ٸ� ��쿡�� �� �� ���� ū ���� 100�� ���� ���

��¿��� 1
3 3 6 -> 1300
��¿��� 2
2 2 2 ->12000
��¿��� 3
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

//�̰� ���� ���� ��� ���Դ� ������ �ؿ� Ǯ�̴� ���� ���� �� Ǯ���� �� �����ؼ� �ٽ� Ǭ �Űŵ��