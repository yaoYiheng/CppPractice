//
//  main.cpp
//  17_12_23_函数模版基本语法
//
//  Created by 姚懿恒 on 2017/12/23.
//  Copyright © 2017年 姚懿恒. All rights reserved.
//

#include <iostream>

//C++引入命名空间, 可以更好的控制识别符的作用域
using namespace std;
/*
     在C++中，数据的类型也可以通过参数来传递，在函数定义时可以不指明具体的数据类型，当发生函数调用时，编译器可以根据传入的实参自动推断数据类型。这就是类型的参数化。
一但定义了函数模板，就可以将类型参数用于函数定义和函数声明了。说得直白一点，原来使用 int、float、char 等内置类型的地方，都可以用类型参数来代替
 */
template <class T>//仅对这之下的函数有效. 或template <Type T> 告诉编译器下面写的是模版函数
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

void test1(){

    int a = 10, b = 20;
    std::cout << "a: " << a << "b: " << b << std::endl;
    Swap(a, b);
    std::cout << "a: " << a << "b: " << b << std::endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //调用
    test1();

    //当使用了namespace 导入std后, 输出输入, 就可以不用再添加std
    cout << "Hello" << endl;
    return 0;
}
