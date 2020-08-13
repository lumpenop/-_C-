#include <stdio.h>
#include <cs50.h>


int scores[9] = {95, 90, 85, 80, 75, 70, 65, 60, 0};
string grades[9] = {"A+","A","B+","B","C+","C","D+","D","F"};

int grade(void);

int main(void)
{
   printf("학점 프로그램\n");
   printf("종료를 원하면 '999'를 입력\n");
   printf("[학점 테이블]\n");

   printf("점수:");
   for (int i = 0; i < 9 ; i++)
   {
      printf("%-3i",scores[i]);
   }

   printf("\n학점:");
   for (int i = 0; i < 9 ; i++)
   {
      printf("%-3s", grades[i]);
   }
   printf("\n");

   grade();

   return 0;
}


int grade(void)
{

   int n = get_int("과목 갯수:");
   int score[n];


   for (int i = 0; i < n; i++)
   {
      score[i] = get_int("점수%i:",i+1);

      if (score[i] == 999)
   {
      printf("종료\n");
      break;
   }


      else if (score[i] < 0 && score[i] > 100)
      {
         printf("0~100 사이의 점수를 입력하세요");
      }
      else
      {
         if (score[i] >= scores[0])
         {
            printf("학점은 A+\n");
         }
         else if (score[i] >= scores[1])
         {
            printf("학점은 A\n");
         }
         else
         {
            printf("학점은 print F\n");
         }
      }
   }

   return 0;
}
