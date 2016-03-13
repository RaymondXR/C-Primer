#include <iostream>
/*
练习2.15
不合法：（b）不能绑定字面值；（d）引用必须初始化。
练习2.16
（a）合法，重新为绑定对象d赋值,r2=3.14159
（b）合法，重新为绑定对象d赋值,r2=0,double
（c）合法，重新为对象i赋值,i=0,int（这个结果比较让人惊讶，i并不是double）
（d）合法，重新为对象i赋值,r1=0,int
练习2.17
10 10
*/

//* 2.16
//int i = 0, &r1 = i;
//double d = 0, &r2 = d;
//int main()
//{
//	i=r2;
//	std::cout << i << "\n" << r2 << std::endl;
//	std::cout << typeid(i).name() << std::endl;
//}

//* 2.17
//int main()
//{
//	int i, &ri = i;
//	i = 5;
//	ri = 10;
//	std::cout << i << " " << ri << std::endl;
//}

//判断指针是否相等：要求存放的地址值相同，而不是字面值相同
//int main()
//{
//	int  r1 = 1, r2 = 1;
//	int *p1 = &r1; 
//	int *p2 = &r2;
//	if (p1 == p2)
//		std::cout << "True" << std::endl;
//	else
//		std::cout << "False" << std::endl;
//}

//练习2.18
//int main()
//{
//	int a1 = 1, a2 = 2;
//	int *p1 = &a1;
//	*p1 = 4; //更改指针所指对象的值
//	std::cout << *p1 << std::endl;
//	p1 = &a2; //更改指针自身的值，注意到指针本身保存对象的地址信息，所以只需要将对象的地址直接赋给指针，前面不需要加*
//	std::cout << *p1 << std::endl;
//}

//练习2.19
//主要区别：
//1. 指针本身是对象，而引用不是。因此，指针可以指向指针，引用不能引用引用，但引用可以引用指针（哈哈哈，随便绕一下）。
//2. 指针在其生命期内可以多次指向不同的公司，而引用只能一次引用，不能变更。
//3. 指针无须在定义时赋初值，如果没有初始化，和其他内置类型一样，将拥有一个不确定的值。

//练习2.20
//int main() {
//	int i = 42; // 令i等于42，赋值
//	int *p1 = &i;// 令p1指向i的储存地址
//	*p1 = *p1 * *p1;// 变更p1的值，令其等于原有地址的平方
//	std::cout << *p1 << std::endl;// 输出1746，即新地址指向的内容
//}

//练习2.21
//（a）不合法，类型不匹配
//（b）不合法，不能直接给指针赋予变量内容
//（c）合法
//
//int main() {
//	int i = 0;
//	double* dp = &i; //*的位置合法但容易产生误导，建议写成double *dp=&i;
//}

//练习2.22
//if (p) //以p自身的值为判断，若地址值大于0，则判断为真
//if (*p) //以p指向的值为判断，若指向的值大于0，则判断为真

//int main() {
//	int i = -2;
//	int *dp = &i;
//	if (dp)
//		std::cout << " True "<< dp << std::endl;
//	else
//		std::cout << " False " << std::endl;
//}

//练习2.23
//不能判断，

//练习2.24
//void可以存放任意对象的地址，而其他情况则需考虑数据类型匹配问题。

//练习2.25
//（a）ip为int类型的指针、i为int类型的数、r为int类型数i的引用。
//（b）i为int类型的数，ip为空指针。
//（c）ip为int类型的指针、ip2位int类型的数。


//练习2.26
//（a）不合法，没有初始化const对象。
//（b）合法。
//（c）合法，如果事先指定了cnt的取值。
//（d）不合法，const对象一旦初始化不能变更。

//练习2.27
//合法的：（b）、（c）、（d）、（e）、（g）

//int main() {
//	const int i = -1, &r = 0;
//	std::cout << typeid(&r).name() << std::endl;
//	return 0;
//}

//练习2.28
////不合法的：（a）、（b）、（c）、（d）
//（a）（b）（d）自身是常量的指针必须初始化
//（c）常量对象必须用常量引用
//（d）正确，指向常量的指针可以不用初始化

//Read it backwards(as driven by Clockwise / Spiral Rule)...
//
//int* -pointer to int
//int const * -pointer to const int
//int * const - const pointer to int
//int const * const - const pointer to const int
//Now the first const can be on either side of the type so :
//
//const int * == int const *
//const int * const == int const * const
//If you want to go really crazy you can do things like this :
//
//	int ** -pointer to pointer to int
//	int ** const - a const pointer to a pointer to an int
//	int * const * -a pointer to a const pointer to an int
//	int const ** -a pointer to a pointer to a const int
//	int * const * const - a const pointer to a const pointer to an int
//
//	By Matt Price（http ://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const）

//int main() {
//	const int *const p;
//	std::cout << typeid(*p).name() << std::endl;
//	return 0;
//}

//练习2.29
//合法的：（b）
//（a）类型不匹配
//（c）类型不匹配
//（d）p3是const pointer，不能更改
//（e）p2是const pointer，不能更改
//（f）ic是const，不能更改

//练习2.30
//v2 顶层const、v1并不是const、p1并不是const pointer
//p2 底层const、p3 顶层&底层const、r2 底层const

//练习2.31
//（1）合法，v1是顶层const，赋值对其没有影响
//（2）不合法，，p2是底层const，赋值时要求具有相同的底层const资格
//（3）p1=p3不合法，因为p3是底层const，而p1不指向常量；p2=p3合法，因为它们都是底层const。


//练习2.32
//int main() {
//	int null = 0, *p = &null;
//}

