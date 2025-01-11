#include <iostream>
using namespace std;

// 继承自C语言的特性
//符号常量 宏定义 常使用全大写
#define PI 3.14 // 没有数据类型的定义 可能不安全
// 全局变量声明
int number = 0;

int main()
{
    // 定义常量 使用const关键字 常使用首字母大写
    // 因为是常量，所以必须要有初值
    const float pi = 3.14159;

    // 基本数据类型
    // 短整型
    short a = 20;
    // 整型
    int b;
    // 长整型
    long a;
    // 长长整型
    long long b;
    // 无符号短整型 unsigned + 类型
    unsigned short c;

    // 特殊类型
    // 字符型
    char ch = 'A'; 
    // 汉字 宽字符类型
    // 布尔类型
    bool flag = true; // 0和1
    // 浮点类型 
    float f = 2.5;
    // 双精度浮点类型
    double d = 3.79E-23;
    
    // 字面值常量

    // 赋值时的类型转换

    // 定义局部变量
    int number = 1;
    // 被局部变量覆盖
    // 被作用于更小的覆盖
    cout << "number: " << number << endl;

    // 全局变量 命名空间下的定义
    cout << "全局变量 number: " << ::number << endl;
    cout << "全局常量 PI: " << PI << endl;
}