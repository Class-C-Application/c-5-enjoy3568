// file: tdscore.c
#include <stdio.h>
#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
    int sum = 0, midsum = 0, finalsum = 0;

    // 2차원 배열 초기화 (1차원 방식으로 나열)
    int score[][COLSIZE] = { 95, 85, 90, 88, 86, 90, 88, 78 };

    printf("       중간      기말\n");
    printf("--------------------\n");
    for (int i = 0; i < ROWSIZE; i++)
    {
        for (int j = 0; j < COLSIZE; j++)
        {
            printf("%10d ", score[i][j]);
            sum += score[i][j];
            
            if (j == 0) // 첫 번째 열(index 0)은 중간고사
                midsum += score[i][j];
            else        // 두 번째 열(index 1)은 기말고사
                finalsum += score[i][j];
        }
        puts(""); // printf("\n")과 동일한 역할
    }

    printf("--------------------\n");
    printf("평균: %6.2f %10.2f\n", (double)midsum / ROWSIZE, (double)finalsum / ROWSIZE);
    printf("\n성적의 합은 %d이고 ", sum);
    printf("평균은 %.2f이다.\n", (double)sum / (ROWSIZE * COLSIZE));

    return 0;
}