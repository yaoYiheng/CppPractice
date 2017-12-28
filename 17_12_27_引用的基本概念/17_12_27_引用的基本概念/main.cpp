//
//  main.cpp
//  17_12_27_引用的基本概念
//
//  Created by 姚懿恒 on 2017/12/27.
//  Copyright © 2017年 姚懿恒. All rights reserved.

/*
 （1）引用被创建的同时必须被初始化（指针则可以在任何时候被初始化）。
 （2）不能有NULL引用，引用必须与合法的存储单元关联（指针则可以是NULL）。
 （3）一旦引用被初始化，就不能改变引用的关系（指针则可以随时改变所指的对象）。
 */

#include <iostream>

using namespace std;

void mySwpa(int *a, int *b){
    int *temp;
    temp = a;
    a = b;
    b = temp;
}

void mySwpa1(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}


int main(int argc, const char * argv[]) {

    int a = 10;
    int &aa = a;// 类型 & 使用引用数据类型, aa就是a的别名.
    int b = 20;

//    mySwpa(&a, &b);
    mySwpa1(aa, b);
    cout << a << b << endl;

    return 0;
}
