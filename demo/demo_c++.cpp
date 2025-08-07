#include "../include/bg_opt_vs.h"

int main() {
    // ����std�����ռ䣨����std::ǰ׺��
    vector<int> vec = {1, 2, 3, 2, 4};
    int cnt = count(vec.begin(), vec.end(), 2);  // ֱ��ʹ��count
    cout << "����2���ֵĴ���: " << cnt << endl;

    // ����O2�Ż�����ͨ����������ܷ�����֤��
    auto start = chrono::high_resolution_clock::now();
    long long sum = 0;
    for (int i = 0; i < 1e8; ++i) sum += i;
    auto end = chrono::high_resolution_clock::now();
    cout << "�����ʱ: " << chrono::duration<double>(end - start).count() << "s" << endl;

    return 0;
}