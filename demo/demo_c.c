#include "../include/bg_opt_vs.h"

int main() {
    // 测试scanf（无需scanf_s）
    int num;
    printf("输入一个整数: ");
    scanf("%d", &num);  // 无安全警告
    print(num);

    // 测试C11特性
    #if __STDC_VERSION__ >= 201112L
    printf("C标准版本: C11+\n");
    #else
    printf("C标准版本: 低于C11\n");
    #endif

    return 0;
}