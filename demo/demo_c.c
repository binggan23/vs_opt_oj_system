#include "../include/bg_opt_vs.h"

int main() {
    // ����scanf������scanf_s��
    int num;
    printf("����һ������: ");
    scanf("%d", &num);  // �ް�ȫ����
    print(num);

    // ����C11����
    #if __STDC_VERSION__ >= 201112L
    printf("C��׼�汾: C11+\n");
    #else
    printf("C��׼�汾: ����C11\n");
    #endif

    return 0;
}