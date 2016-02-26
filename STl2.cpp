// STl2.cp;p : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "vector"
#include "stdlib.h"
#include "iostream"
#include "algorithm"
#include "iterator"
#include "set"
//自己的
#include "Algorithm.h"
using namespace std;


class A
{
	
};

template <class T>
class ver{
public: 
	int a;
	//void swap(ver<T, A>& y)
	//{
	//	//this->a ^= y.a;
	//	//y.a = this->a^;
	//	//this->a ^= y.a;
	//	this->a ^= y.a;
	//	y.a ^= this->a;
	//	this->a ^= y.a;
	//}
	int operator+(ver&);//{cout << "operator+" << endl;return 0;};
	//template<> int operator+(ver&);
	void fun();
};

template <class T>
void ver<T>::fun()
{
	cout << "T_FUN" << endl;
}

//template <>
void ver<char>::fun()
{
	cout << "ch" << endl;
}
template <class T>
int ver<T>::operator+( ver& )
{
	cout << "T" << endl;
	return 0;
}

template <>
int ver<char>::operator+( ver& )
{
	cout << "char" << endl;
	return 1;
}


template <class T, class S>
inline void swapx(ver<T>& x, ver<T>& y)
{
	x.swap(y);
}

template <class T>
class PRINT
{
public: 
	void operator()(const T& elem)
	{
		cout << elem << endl;
	}
	static int aaa;
};
int PRINT<int>::aaa = 1;
int PRINT<char>::aaa = 10;

union un
{
	short a;
	char b[2];
};
class ppp
{
public:
	~ppp(){cout<<"ok~" << endl;}
};
template <int As>
class nbc
{
public:
	nbc(){c=10;};
	int c;
};
class chunk
{
public:
	int a[256];
};

union obj
{
	union obj* pfll;
	char a[1];
};

int _tmain(int argc, _TCHAR* argv[])
{
	nbc<0> s;
	cout << s.c << endl;
	int a[4]={1,2,3,4};
	vector<int> va(a,a+4);
	vector<int>::iterator iter=va.begin();

	
	//cout << sxp.aaa << endl;
	//for (;iter != va.end(); iter++)
	//	cout << *iter << endl;
//	for_each(va.begin(),va.end(),PRINT<int>());
	//cout << asd.b[0] << endl;
	//cout << asd.b[1] << endl;
	//obj flist[10];
	//obj* volatile *pmy;
	//pmy=flist+1;

	//__type_traits<int>::has_trivial_assignment_operator
	//vector<ppp> vv;
	int * volatile * pm;
	int * ph;
	
	//vv.push_back(ppp());
	vector<chunk> vec_Chunk;
	vec_Chunk.push_back(chunk());
	//allocator<int> x;
	
	//vector<int> iv;
	//iv.push_back(1);
	//iv.push_back(1);
	//iv.push_back(1);
	//iv.push_back(1);
	//iv.push_back(1);
	//for (i=0;i<iv.size();i++)
	//{
	//	cout << iv[i] << ' ';
	//}
	//CJ::allocator<int> ax;
	//CJ::allocator<int>::pointer p=NULL;
	//ax.construct(p,10);
	printf("\n");
	
	system("pause");
	return 0;
}

