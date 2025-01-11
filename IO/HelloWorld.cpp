# include <iostream>
// io stream package
using namespace std;
// 使用了std这个命名空间
// 主函数
int main(){
    // 运算符 <<
    // std::cout 库中函数
    // std:: 命名空间
    // <<std::endl 输出行结束
    std::cout<< "Hello World" << std::endl;

    // input the name
    std::cout<< "Please input your name: ";

    // 定义一个字符串
    std::string name;

    // 输入字符串
    std::cin >> name;

    // 输出字符串
    std::cout<< "Hello, " << name << "!!!" << std::endl;
    return 0;
}
// 再接再厉