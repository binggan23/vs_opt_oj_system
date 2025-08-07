/*
 * bg_opt_vs.h - ��Visual Studio��������׼C++�Ĺ��߼�
 * Copyright (c) [2025] [binggan23]
 * ���ļ���ѭMIT���֤���������Ŀ��Ŀ¼��LICENSE�ļ�
 */
#ifndef BG_OPT_VS_H
#define BG_OPT_VS_H

// ��׼C����
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

// O2
#pragma optimize("O2", on)

// ����C��C++����ģʽ���ֱ����׼�汾
#ifdef __cplusplus
// ===== C++ģʽ��� =====
#if __cplusplus < 201103L  // C++11�ı�׼��ֵΪ201103L
    #if defined(_MSC_VER)
        // Visual Studioʹ��#pragma message�����ʾ
        #pragma message("WARNING: ���齫C++��׼����ΪC++11�����ϣ���Ŀ����->C/C++->����->C++��׼��")
    #elif defined(__GNUC__) || defined(__clang__)
        // GCC/Clangʹ��#warning�����ʾ
        #warning "���齫C++��׼����ΪC++11�����ϣ�����ʱ���ѡ��: -std=c++11 ����߰汾"
    #else
        #warning "����ʹ��C++11�����ϱ�׼����"
    #endif
#endif

#else
// ===== Cģʽ��� =====
#if __STDC_VERSION__ < 201112L  // C11�ı�׼��ֵΪ201112L
    #if defined(_MSC_VER)
        // Visual Studioʹ��#pragma message�����ʾ
        #pragma message("WARNING: ���齫C��׼����ΪC11�����ϣ���Ŀ����->C/C++->����->C��׼��")
    #elif defined(__GNUC__) || defined(__clang__)
        // GCC/Clangʹ��#warning�����ʾ(�ͱ����Ǹ�vscode)
        #warning "���齫C��׼����ΪC11�����ϣ�����ʱ���ѡ��: -std=c11 ����߰汾"
    #else
        #warning "����ʹ��C11�����ϱ�׼����"
    #endif
#endif

#endif
    

// ��������C��׼��
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

// C++��
#ifdef __cplusplus
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // count�����Ķ���
#include <ctime>      // time������C++�汾
#include <cstdlib>    // abs������C++�汾
#include <cmath>      // ��ѧ������C++�汾
//TODO:û�Թ���û��bug
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
//TODO:#include <limits.h>����õ��Ǻ꣬û����C++��limits
//���������ռ�
using std::count;
using std::time;
using std::abs;
using namespace std;
#endif

//���ú궨��
#define PI              3.14159265358979323846
#define EPS             1e-9
#define MAX(a, b)       ((a) > (b) ? (a) : (b))
#define MIN(a, b)       ((a) < (b) ? (a) : (b))
#define ABS(x)          ((x) >= 0 ? (x) : -(x))
#define SWAP(a, b)      do { typeof(a) temp = (a); (a) = (b); (b) = temp; } while(0)
#define CLAMP(x, min, max) ((x) < (min) ? (min) : ((x) > (max) ? (max) : (x)))
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

// �������������
#define print(x)        printf("%s = %d\n", #x, x)
#define print_str(x)    printf("%s = %s\n", #x, x)
#define print_float(x)  printf("%s = %f\n", #x, x)

// ���Ժ�
#ifdef _DEBUG
#define DEBUG_PRINT(x)  printf("DEBUG: %s at %s:%d\n", x, __FILE__, __LINE__)
#else
#define DEBUG_PRINT(x)
#endif

#endif // BG_OPT_VS_H
