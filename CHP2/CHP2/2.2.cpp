#include <iostream>
/*
2.2.1节练习
练习2.9
（a）错误，不能在cin的同时定义类型
（b）错误，数据丢失风险
（c）错误，不能同时定义
（d）正确，但是int会略去小数位
练习2.10
前两者在函数体外的初值为0（global_int为0，global_str出现错误？）
后两者在函数体内的将不被初始化
*/

//#include <iostream>
//std::string global_str;
//int global_int;
//int main() {
//	int local_int;
//	std::string local_str;
//	std::cout << global_str << std::endl;
//	std::cout << global_int << std::endl;
//	std::cout << local_str << std::endl;
//	std::cout << local_int << std::endl;
//	return 0;
//}

/*
练习2.11
（a）定义
（b）定义
（c）申明
*/

/*
练习2.12
非法的名字：（a）、（c）、（d）
*/

//int main()
//{
//	int Double=3.15;
//	return 0;
//}

/*
练习2.13
j=100;
练习2.14
100 45
*/

//int i = 42;
//int main() 
//{
//	int i = 100;
//	int j = i;
//	std::cout << j << std::endl;
//}

//int main()
//{
//	int i = 100, sum = 0;
//	for (int i = 0; i != 10; ++i)
//		sum += i;
//	std::cout << i << " " << sum << std::endl;
//}