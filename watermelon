#include <stdio.h>
#include <cs50.h>


void wm(void);

int main(void)
{
 wm();
}




void wm(void)
{
    int wm = 5;
    while(wm > 0)
    {   
        int wm2 = wm;
        int n = get_int("주문량:");

        if(n - wm > 0)
        {
            printf("수박의 최대 수량은 %i개 입니다.\n",wm2);
        }

        else if(n < 1)
        {
            printf("선택 가능한 주문 수량은 1개 이상 입니다.\n");
        }

        else
        {
            
            
            int price = 10000;
            int vat = price/10;
            int total = (price + vat) * n;
            
            printf("주문건수:%i\n",n);
            printf("기존 재고량:%i\n",wm2);
            printf("남은 재고량:%i\n",wm2-n);
            printf("매출액:%i\n",total);
            wm = wm - n;
            if(wm==0)
            {
                printf("완판\n");
                break;
            }
            
        }   
    }
}

    

