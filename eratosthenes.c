#include <stdio.h>
#include <math.h>

#define NUM 2022  // NUM以下の素数を求める

int main(void)
{
unsigned i, j;
unsigned sq_num = (int)sqrt((double)NUM);
unsigned prime[NUM];

// 1が立っているものが素数
// 0が立っているものが合成数

for (i = 1; i < NUM; i++)
prime[i] = 1;  // 全ての数に1を立てる


for (i = 1; i < sq_num; i++) {
for (j = (i+1); (i+1) * j <= NUM; j++)
prime[(i+1) * j - 1] = 0;  //素数の倍数は素数ではないため除外する
}

for (i = 1; i < NUM; i++)
if (prime[i] == 1)  // 1が立っているものが素数
printf("%d \n", i + 1); //出力

return (0);
}