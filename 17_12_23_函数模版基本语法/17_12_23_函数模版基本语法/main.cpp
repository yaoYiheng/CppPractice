//
//  main.cpp
//  17_12_23_函数模版基本语法
//
//  Created by 姚懿恒 on 2017/12/23.
//  Copyright © 2017年 姚懿恒. All rights reserved.
//

#include <iostream>

template <class T>
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
