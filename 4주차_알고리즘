#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

void ana(void);

int main()
{
    ana();
}

void ana(void)
{

    int temp1;
    int temp2;
    
    string num1 = get_string("숫자를 입력하세요\n");
    string num2 = get_string("애너그램을 입력하세요\n");

    for (int i=0; i <5; i++)
    {
        for (int j=0; j<5-i;j++){
            
            if (num1[j]>num1[j+1]){
                temp1 = num1[j];
                num1[j] = num1[j+1];
                num1[j+1] = temp1;            
            } 
            if (num2[j]>num2[j+1]){
                temp2 = num2[j];
                num2[j] = num2[j+1];
                num2[j+1] = temp2;            
            } 
        }
    }
   
    if (atoi(num1)==atoi(num2))
    {
        printf("True\n");
    }
    else
    {
       printf("False\n");
    }
}
