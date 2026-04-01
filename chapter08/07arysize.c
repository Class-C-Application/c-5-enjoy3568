#include <stdio.h>

int main(void)
{
    int data[] = { 3, 4, 5, 7, 9 };

    // 1차원 배열의 크기 계산
    printf("%d %d\n", (int)sizeof(data), (int)sizeof(data[0]));
    printf("배열 data 크기 == %d\n", (int)(sizeof(data) / sizeof(data[0])));

    // 2 x 2 행렬 (주석에는 4x3이라고 되어있으나 실제 코드는 2x2입니다)
    double x[][2] = {
        { 1.2, 2.3 },
        { 7.3, 8.9 }
    };

    // 2차원 배열의 크기 계산
    printf("%d %d ", (int)sizeof(x), (int)sizeof(x[0])); // 전체 크기와 첫 행 크기
    printf("%d %d\n", (int)sizeof(x[1]), (int)sizeof(x[0][0]));

    int rowsize = sizeof(x) / sizeof(x[0]);
    int colsize = sizeof(x[0]) / sizeof(x[0][0]);

    printf("이차원 배열 x: 행수 = %d  열수 = %d\n", rowsize, colsize);
    printf("이차원 배열 x: 전체 원소 수 = %d\n", (int)(sizeof(x) / sizeof(x[0][0])));

    return 0;
}