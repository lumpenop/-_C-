#include <stdio.h>


int main(void){

int arr[6][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15},{16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}, {26, 27, 28, 29, 30}};


int p = sizeof(arr[0])/sizeof(int);
printf("%i\n",p);
int n = sizeof(arr)/sizeof(int)/p;
printf("%i\n",n);

for (int i=0; i < n ;i++)
{
    for (int j =0; j < p; j++)
    {
        printf("%i\t",*(*(arr + i) + j));
    }
    printf("\n");
}

}
