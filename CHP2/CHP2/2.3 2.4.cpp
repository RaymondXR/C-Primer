#include <iostream>
/*
��ϰ2.15
���Ϸ�����b�����ܰ�����ֵ����d�����ñ����ʼ����
��ϰ2.16
��a���Ϸ�������Ϊ�󶨶���d��ֵ,r2=3.14159
��b���Ϸ�������Ϊ�󶨶���d��ֵ,r2=0,double
��c���Ϸ�������Ϊ����i��ֵ,i=0,int���������Ƚ����˾��ȣ�i������double��
��d���Ϸ�������Ϊ����i��ֵ,r1=0,int
��ϰ2.17
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

//�ж�ָ���Ƿ���ȣ�Ҫ���ŵĵ�ֵַ��ͬ������������ֵ��ͬ
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

//��ϰ2.18
//int main()
//{
//	int a1 = 1, a2 = 2;
//	int *p1 = &a1;
//	*p1 = 4; //����ָ����ָ�����ֵ
//	std::cout << *p1 << std::endl;
//	p1 = &a2; //����ָ�������ֵ��ע�⵽ָ�뱾�������ĵ�ַ��Ϣ������ֻ��Ҫ������ĵ�ֱַ�Ӹ���ָ�룬ǰ�治��Ҫ��*
//	std::cout << *p1 << std::endl;
//}

//��ϰ2.19
//��Ҫ����
//1. ָ�뱾���Ƕ��󣬶����ò��ǡ���ˣ�ָ�����ָ��ָ�룬���ò����������ã������ÿ�������ָ�루�������������һ�£���
//2. ָ�������������ڿ��Զ��ָ��ͬ�Ĺ�˾��������ֻ��һ�����ã����ܱ����
//3. ָ�������ڶ���ʱ����ֵ�����û�г�ʼ������������������һ������ӵ��һ����ȷ����ֵ��

//��ϰ2.20
//int main() {
//	int i = 42; // ��i����42����ֵ
//	int *p1 = &i;// ��p1ָ��i�Ĵ����ַ
//	*p1 = *p1 * *p1;// ���p1��ֵ���������ԭ�е�ַ��ƽ��
//	std::cout << *p1 << std::endl;// ���1746�����µ�ַָ�������
//}

//��ϰ2.21
//��a�����Ϸ������Ͳ�ƥ��
//��b�����Ϸ�������ֱ�Ӹ�ָ�븳���������
//��c���Ϸ�
//
//int main() {
//	int i = 0;
//	double* dp = &i; //*��λ�úϷ������ײ����󵼣�����д��double *dp=&i;
//}

//��ϰ2.22
//if (p) //��p�����ֵΪ�жϣ�����ֵַ����0�����ж�Ϊ��
//if (*p) //��pָ���ֵΪ�жϣ���ָ���ֵ����0�����ж�Ϊ��

//int main() {
//	int i = -2;
//	int *dp = &i;
//	if (dp)
//		std::cout << " True "<< dp << std::endl;
//	else
//		std::cout << " False " << std::endl;
//}

//��ϰ2.23
//�����жϣ�

//��ϰ2.24
//void���Դ���������ĵ�ַ��������������迼����������ƥ�����⡣

//��ϰ2.25
//��a��ipΪint���͵�ָ�롢iΪint���͵�����rΪint������i�����á�
//��b��iΪint���͵�����ipΪ��ָ�롣
//��c��ipΪint���͵�ָ�롢ip2λint���͵�����


//��ϰ2.26
//��a�����Ϸ���û�г�ʼ��const����
//��b���Ϸ���
//��c���Ϸ����������ָ����cnt��ȡֵ��
//��d�����Ϸ���const����һ����ʼ�����ܱ����

//��ϰ2.27
//�Ϸ��ģ���b������c������d������e������g��

//int main() {
//	const int i = -1, &r = 0;
//	std::cout << typeid(&r).name() << std::endl;
//	return 0;
//}

//��ϰ2.28
////���Ϸ��ģ���a������b������c������d��
//��a����b����d�������ǳ�����ָ������ʼ��
//��c��������������ó�������
//��d����ȷ��ָ������ָ����Բ��ó�ʼ��

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
//	By Matt Price��http ://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const��

//int main() {
//	const int *const p;
//	std::cout << typeid(*p).name() << std::endl;
//	return 0;
//}

//��ϰ2.29
//�Ϸ��ģ���b��
//��a�����Ͳ�ƥ��
//��c�����Ͳ�ƥ��
//��d��p3��const pointer�����ܸ���
//��e��p2��const pointer�����ܸ���
//��f��ic��const�����ܸ���

//��ϰ2.30
//v2 ����const��v1������const��p1������const pointer
//p2 �ײ�const��p3 ����&�ײ�const��r2 �ײ�const

//��ϰ2.31
//��1���Ϸ���v1�Ƕ���const����ֵ����û��Ӱ��
//��2�����Ϸ�����p2�ǵײ�const����ֵʱҪ�������ͬ�ĵײ�const�ʸ�
//��3��p1=p3���Ϸ�����Ϊp3�ǵײ�const����p1��ָ������p2=p3�Ϸ�����Ϊ���Ƕ��ǵײ�const��


//��ϰ2.32
//int main() {
//	int null = 0, *p = &null;
//}

