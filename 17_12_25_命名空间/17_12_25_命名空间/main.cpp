//
//  main.cpp
//  17_12_25_命名空间
//
//  Created by 姚懿恒 on 2017/12/25.
//  Copyright © 2017年 姚懿恒. All rights reserved.

/*
 1. 当使用<iostream>时, 该头文件没有定义全局命名空间, 必须使用namespace std; 这样才能正确使用cout, 若不引入, 在使用时则需要 std:: cout.

 2. c++ 为了和c区别开, 也为了正确使用命名空间, 规定头文件不使用后缀.h

 3. c++命名空间的定义: namespace name {....}

 4. 使用时: using namespace name;

 5. namespac可以嵌套
 */

#include <iostream>

using namespace std;//C++引入命名空间, 可以更好的控制识别符的作用域

//自定义命名空间
namespace spaceA {
    int a = 0;
}

//稍微复杂的命名空间
/*
 可以进行嵌套,
 需要逐步引用到最终需要的变量, 不能跳过
 */
namespace spaceB {
    int a = 20;

    namespace spaceC {
        struct Teacher {
            int id;

        };
    }
}
int main(int argc, const char * argv[]) {

    //使用命名空间
    using namespace spaceA;
    cout << "a = " << a << endl;

    //如果想要使用spaceB中的spaceC则需要书写完整的路径
    using namespace spaceB:: spaceC;
    //使用spaceB中的spaceC里的结构体
    struct Teacher t1;

    t1.id = 20;


    return 0;
}
