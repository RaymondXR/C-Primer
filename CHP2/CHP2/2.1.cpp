/*
Hint：typeid().name()
* 练习2.5
（a） 字符字面值、宽字符型字符字面值、字符串字面值、宽字符型字符串字面值
（b） 整型字面值、无符号整型字面值（类型为unsigned int）、整型字面值（类型为long）、 无符号整型字面值（类型为unsigned long）、八进制（表示10）、十六进制（表示10）
（c） 浮点型字面值（类型为double）、单精度浮点型字面值（类型为float）、扩展精度浮点型字面值（类型为long double）
（d） 整型字面值、无符号整型字面值（类型为unsigned int）、浮点型字面值（类型为double）、浮点型字面值（类型为double）
* 练习2.6
前者为十进制，后者为八进制（且会出现输出错误）
* 练习2.7
（a） char const [23]
（b） long double
（c） 报错,除非1024.f（float）
（d） long double
*/

// 练习2.7
#include <iostream>
int main() 
{
	std::cout << "2\115\n" << std::endl; //先输出2M，然后转到新一行
	std::cout << "2\t\115\n" << std::endl; //先输出2，然后输出制表符，再输出M，最后转到新一行
}
