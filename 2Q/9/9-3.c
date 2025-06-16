#include <stdio.h>

int main(void)
{
    int nums[3];
    int max;

    // a, b, cの入力
    printf("input a: ");
    scanf("%d", &nums[0]);
    printf("input b: ");
    scanf("%d", &nums[1]);
    printf("input c: ");
    scanf("%d", &nums[2]);

    max = nums[0];

    for (int i = 1; i < 3; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    printf("Maximum number = %d.\n", max);

    return 0;
}