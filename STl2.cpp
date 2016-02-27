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
int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);
	int get1 = vec.at(0);
	
	system("pause");
	return 0;
}

