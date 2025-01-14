#include<iostream>
using namespace std;

int main(){
    // if-else statement
    // 单分支
    cout << "input your age"<< endl;
    int age;
    cin >> age;
    if(age >= 18){
        cout << "you are an adult" << endl;
    }
    else if (age >= 12){
        cout << "you are a child" << endl;
    }
    else{
        cout << "you are a kid" << endl;
    }

    // switch statement
    // 多分支
    /*
    switch (表达式）
    {
    case 常量表达式1:
        语句1;
        break;
    case 常量表达式2:
        语句2;
        break;
    default:
        语句3;
        break;
    }    
    */

}