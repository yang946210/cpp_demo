
#include <cstring>
#include "iostream"

#pragma clang diagnostic push
using namespace std;


const int DATA = 20;

#define DATA2 23;

/**
 * ������������
 * �漰�ؼ���
 *
 * bool char int float double wchar_t ������������
 *
 * signed unsigned long short  ���������������η�
 *
 * sizeof typeId ���߹ؼ���
 *
 * const #define ȫ�ֹؼ���
 *
 * auto static register extern �洢��ؼ���
 *
 */



//������������
void base_data_test() {
    cout << "bool �ֽ�:" << sizeof(bool) << endl;

    cout << "char �ֽ�:" << sizeof(char) << endl;
    cout << "unsigned char �ֽ�:" << sizeof(unsigned char) << endl;

    cout << "int �ֽ�:" << sizeof(int) << endl;
    cout << "short int �ֽ�:" << sizeof(short int) << endl;
    cout << "long int �ֽ�:" << sizeof(long int) << endl;
    cout << "long long int �ֽ�:" << sizeof(long long int) << endl;
    cout << "unsigned int �ֽ�:" << sizeof(unsigned int) << endl;
    cout << "unsigned short int �ֽ�:" << sizeof(unsigned short int) << endl;
    cout << "unsigned long int �ֽ�:" << sizeof(unsigned long int) << endl;
    cout << "unsigned long long int �ֽ�:" << sizeof(unsigned long long int) << endl;

    cout << "float �ֽ�:" << sizeof(float) << endl;

    cout << "double �ֽ�:" << sizeof(double) << endl;
    cout << "long double �ֽ�:" << sizeof(long double) << endl;

    cout << "wchar_t �ֽ�:" << sizeof(wchar_t) << endl;

    int s = DATA + DATA2;
    cout << "wchar_t �ֽ�:" << s << endl;

}


//����
void array_test() {
    int int_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0,};
    for (int a: int_array) {
        cout << "int array:" << a << endl;
    }
}

//�ַ���
void string_test() {
    //c����ַ���
    char string_c1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

    int c1_length = size(string_c1);

    char string_c2[] = "hello c";

    //string�����ַ���
    string string_new = "hello string";

    cout << "���»�ȡ�ַ�������" << c1_length << strlen(string_c2) << string_new.size() << endl;
}

//�洢��
void storage_test() {

}


//ָ��
void point_test() {
    int a = 10086;
    int *p = &a;

    cout << "a��ֵ:" << a << "  a�ĵ�ַ" << &a << "   pָ���ʾa�ĵ�ַ��" << p << endl;
    cout << "pָ�뱾��ĵ�ַ :" << &p << "    *pȡ��pָ��ָ���ַ(a��ַ)��ֵ" << *p << endl;
}

//����
void cite_test() {
    int i = 10086;
    int * k = &i;
    int j = i;

    cout << "j��ֵ :" << j << "    k��ֵ" << k << endl;
}


/**
 * ����ģ��
 * typedef
 */
void typedef_test() {
    typedef int number;
    number x = 23;
    cout << "x �ֽ�" << sizeof(x) << x << endl;
    cout << "x ������" << typeid(x).name() << endl;
}


/**
 * Ԥ������
 */
void default_text() {
    //Ԥ������
}
