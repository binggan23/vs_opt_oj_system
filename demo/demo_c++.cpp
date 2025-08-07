#include "../include/bg_opt_vs.h"

int main() {
    // 测试std命名空间（无需std::前缀）
    vector<int> vec = {1, 2, 3, 2, 4};
    int cnt = count(vec.begin(), vec.end(), 2);  // 直接使用count
    cout << "数字2出现的次数: " << cnt << endl;

    // 测试O2优化（可通过编译后性能分析验证）
    auto start = chrono::high_resolution_clock::now();
    long long sum = 0;
    for (int i = 0; i < 1e8; ++i) sum += i;
    auto end = chrono::high_resolution_clock::now();
    cout << "计算耗时: " << chrono::duration<double>(end - start).count() << "s" << endl;

    return 0;
}