/*
 * bg_opt_vs.h - 让Visual Studio更贴近标准C++的工具集
 * Copyright (c) [2025] [binggan23]
 * 本文件遵循MIT许可证，详情见项目根目录的LICENSE文件
 */
#ifndef BG_OPT_VS_H
#define BG_OPT_VS_H

// 标准C函数
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

// O2
#pragma optimize("O2", on)

// 区分C和C++编译模式，分别检查标准版本
#ifdef __cplusplus
// ===== C++模式检查 =====
#if __cplusplus < 201103L  // C++11的标准宏值为201103L
    #if defined(_MSC_VER)
        // Visual Studio使用#pragma message输出提示
        #pragma message("WARNING: 建议将C++标准设置为C++11及以上（项目属性->C/C++->语言->C++标准）")
    #elif defined(__GNUC__) || defined(__clang__)
        // GCC/Clang使用#warning输出提示
        #warning "建议将C++标准设置为C++11及以上，编译时添加选项: -std=c++11 或更高版本"
    #else
        #warning "建议使用C++11及以上标准编译"
    #endif
#endif

#else
// ===== C模式检查 =====
#if __STDC_VERSION__ < 201112L  // C11的标准宏值为201112L
    #if defined(_MSC_VER)
        // Visual Studio使用#pragma message输出提示
        #pragma message("WARNING: 建议将C标准设置为C11及以上（项目属性->C/C++->语言->C标准）")
    #elif defined(__GNUC__) || defined(__clang__)
        // GCC/Clang使用#warning输出提示(就比如那个vscode)
        #warning "建议将C标准设置为C11及以上，编译时添加选项: -std=c11 或更高版本"
    #else
        #warning "建议使用C11及以上标准编译"
    #endif
#endif

#endif
    

// 包含常用C标准库
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <limits.h>
#include <float.h>
#include <errno.h>
#include <assert.h>
#include <stdarg.h>
#include <wchar.h>
#include <uchar.h>
#include <setjmp.h>
#include <signal.h>

// C++的
#ifdef __cplusplus
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // count函数的定义
#include <ctime>      // time函数的C++版本
#include <cstdlib>    // abs函数的C++版本
#include <cmath>      // 数学函数的C++版本
//TODO:没试过有没有bug
#include <functional>
#include <memory>
#include <utility>
#include <tuple>
#include <array>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <iterator>
#include <numeric>
#include <random>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <atomic>
#include <bitset>
#include <type_traits>
#include <iomanip>
#include <sstream>
#include <fstream>
//TODO:#include <limits.h>这个用的是宏，没有用C++的limits
//处理命名空间
using std::count;
using std::time;
using std::abs;
using namespace std;
#endif

//常用宏定义
#define PI              3.14159265358979323846
#define EPS             1e-9
#define MAX(a, b)       ((a) > (b) ? (a) : (b))
#define MIN(a, b)       ((a) < (b) ? (a) : (b))
#define ABS(x)          ((x) >= 0 ? (x) : -(x))
#define SWAP(a, b)      do { typeof(a) temp = (a); (a) = (b); (b) = temp; } while(0)
#define CLAMP(x, min, max) ((x) < (min) ? (min) : ((x) > (max) ? (max) : (x)))
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

// 简化输入输出操作
#define print(x)        printf("%s = %d\n", #x, x)
#define print_str(x)    printf("%s = %s\n", #x, x)
#define print_float(x)  printf("%s = %f\n", #x, x)

// 调试宏
#ifdef _DEBUG
#define DEBUG_PRINT(x)  printf("DEBUG: %s at %s:%d\n", x, __FILE__, __LINE__)
#else
#define DEBUG_PRINT(x)
#endif

#endif // BG_OPT_VS_H
