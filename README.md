# vs_opt_oj_system：让Visual Studio更贴近标准C++

<div align="center">
  <a href="https://github.com/binggan23/vs_opt_oj_system/blob/main/LICENSE">
    <img src="https://img.shields.io/badge/license-MIT-blue.svg" alt="License: MIT">
  </a>
  <a href="https://github.com/binggan23/vs_opt_oj_system">
    <img src="https://img.shields.io/github/stars/binggan23/vs_opt_oj_system?style=social" alt="Stars">
  </a>
  <img src="https://img.shields.io/badge/C-11%2B-orange.svg" alt="C Standard: C11+">
  <img src="https://img.shields.io/badge/C%2B%2B-11%2B-blue.svg" alt="C++ Standard: C++11+">
  <img src="https://img.shields.io/badge/Visual%20Studio-2022%2B-green.svg" alt="VS Version: 2022+">
</div>

---

一个轻量级头文件工具集，为Visual Studio提供标准C/C++兼容性优化、自动O2优化及常用库集成，简化开发流程。  
***`注意!!`***:本代码使用的编码为GBK

## 核心特性

| 特性 | 说明 |
|------|------|
| **标准兼容性** | 禁用VS安全警告（支持`scanf`/`strcpy`等标准函数，无需`_s`后缀） |
| **自动O2优化** | 强制启用O2优化，提升程序运行效率（无需手动配置项目属性） |
| **命名空间简化** | 通过`using namespace std`直接使用C++标准库组件（如`count`无需`std::`前缀） |
| **常用库集成** | 包含几乎所有C/C++标准库（`stdio.h`/`vector`/`thread`等），无需手动引入 |
| **开发辅助宏** | 提供`MAX`/`MIN`/`print`等实用宏，加速代码编写 |

## 安装与使用

1. **下载**:克隆仓库或直接下载`include/bg_opt_vs.h`。
   ```bash
   git clone https://github.com/binggan23/vs_opt_oj_system.git
2. **集成到项目**: 将bg_opt_vs.h放入项目的include目录（或任意目录）。  
在代码中直接包含:  
    ```c++
    #include "bg_opt_vs.h"  // C项目
    // 或
    #include "bg_opt_vs.h"  // C++项目
    ```
3. **VS 配置建议（可选）**:  
    - 项目属性 -> C/C++ -> 语言 -> 将 “C 标准” 设置为C11，“C++ 标准” 设置为C++17及以上。
    - 若需调试，可在#include前定义_DEBUG禁用 O2 优化（仅调试时）。

## 示例

详见examples目录，包含 C 和 C++ 的基础用法演示。

## 注意事项
- 仅支持 Visual Studio（通过_MSC_VER识别），其他编译器可能需调整宏定义。
- 若需严格遵循命名空间规范，可注释掉using namespace std并手动添加所需using声明。
- 项目仍在完善中，欢迎提交 PR 补充功能或修复问题。
## 开源协议
本项目采用MIT 许可证，允许自由使用、修改和分发（需保留版权声明）。
