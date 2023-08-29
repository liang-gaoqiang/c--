#include <bits/stdc++.h>
using namespace std;


class Solution{
public:


};


int main(){

	// 算法测试
	Solution s;
	//比较a、b之间的大小关系
	
	int a = 10;
	int b = 20;
	int c = 0;
	c = a > b ? a : b;
	cout << c << endl;
	/*===============重点=================*/
	//在C++中三目运算符返回的是变量，可以继续赋值。
	(a > b ? a : b) = 100;
	
	cout << "a = " << a << endl; 
	cout << "b = " << b << endl; 
	 

	return 0;

}


