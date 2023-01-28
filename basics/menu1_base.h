
#include <cstring>
#include "iostream"

#pragma clang diagnostic push
using namespace std;


const int DATA = 20;

#define DATA2 23;

/**
 * 基本数据类型
 * 涉及关键字
 *
 * bool char int float double wchar_t 基础数据类型
 *
 * signed unsigned long short  基础数据类型修饰符
 *
 * sizeof typeId 工具关键字
 *
 * const #define 全局关键字
 *
 * auto static register extern 存储类关键字
 *
 */



//基础数据类型
void base_data_test() {
    cout << "bool 字节:" << sizeof(bool) << endl;

    cout << "char 字节:" << sizeof(char) << endl;
    cout << "unsigned char 字节:" << sizeof(unsigned char) << endl;

    cout << "int 字节:" << sizeof(int) << endl;
    cout << "short int 字节:" << sizeof(short int) << endl;
    cout << "long int 字节:" << sizeof(long int) << endl;
    cout << "long long int 字节:" << sizeof(long long int) << endl;
    cout << "unsigned int 字节:" << sizeof(unsigned int) << endl;
    cout << "unsigned short int 字节:" << sizeof(unsigned short int) << endl;
    cout << "unsigned long int 字节:" << sizeof(unsigned long int) << endl;
    cout << "unsigned long long int 字节:" << sizeof(unsigned long long int) << endl;

    cout << "float 字节:" << sizeof(float) << endl;

    cout << "double 字节:" << sizeof(double) << endl;
    cout << "long double 字节:" << sizeof(long double) << endl;

    cout << "wchar_t 字节:" << sizeof(wchar_t) << endl;

    int s = DATA + DATA2;
    cout << "wchar_t 字节:" << s << endl;

}


//数组
void array_test() {
    int int_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0,};
    for (int a: int_array) {
        cout << "int array:" << a << endl;
    }
}

//字符串
void string_test() {
    //c风格字符串
    char string_c1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

    int c1_length = size(string_c1);

    char string_c2[] = "hello c";

    //string类型字符串
    string string_new = "hello string";

    cout << "以下获取字符串长度" << c1_length << strlen(string_c2) << string_new.size() << endl;
}

//存储类
void storage_test() {

}


//指针
void point_test() {
    int a = 10086;
    int *p = &a;

    cout << "a的值:" << a << "  a的地址" << &a << "   p指针表示a的地址：" << p << endl;
    cout << "p指针本身的地址 :" << &p << "    *p取到p指针指向地址(a地址)的值" << *p << endl;
}

//引用
void cite_test() {
    int i = 10086;
    int * k = &i;
    int j = i;

    cout << "j的值 :" << j << "    k的值" << k << endl;
}


/**
 * 类型模板
 * typedef
 */
void typedef_test() {
    typedef int number;
    number x = 23;
    cout << "x 字节" << sizeof(x) << x << endl;
    cout << "x 的类型" << typeid(x).name() << endl;
}


/**
 * 预处理器
 */
void default_text() {
    //预处理器
}
