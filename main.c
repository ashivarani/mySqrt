#include <stdio.h>

int mySqrt(int x) {
    if (x <= 1) return x;
    int left = 0, right = x;
    while (1) {
        long mid = (left + right) / 2;
        if (mid * mid == x) {
            return mid;
        }
        if (mid * mid > x) {
            right = mid;
        } else {
            left = mid;
        }
        if (left + 1 >= right) {
            break;
        }
    }
    return left;
}

int main() {
    int num = 17;
    printf("Integer square root of %d is %d\n", num, mySqrt(num));
    return 0;
}
