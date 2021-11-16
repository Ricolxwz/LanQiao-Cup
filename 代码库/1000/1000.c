/*
    给定两个整数a,b(0<=a, b<=1,000),计算a+b的值
*/

#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) 
        printf("%d\n", a + b);
    return 0;
}