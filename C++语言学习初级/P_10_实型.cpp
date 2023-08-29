#include <bits/stdc++.h>
using namespace std;

#define TRUE  1
#define FALSE 0
#define OK    1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW   -2

class Solution{
	public:


};


int main(){

	//测试算法
	Solution s;
	// 默认情况下，编译器会默认float类型的数据为双精度
	float f1 = 3.14f; 
	cout << "f1 = " << f1 << endl;
	
	double d1 = 3.14;
	cout << "d1 = " << d1 << endl;
	
	//变量d1和f1之间的查别是二者的精度不同
	// 默认情况下，输出一个小说，会显示出6位有效数字
	
	//科学计数法
	float f2 = 3e2;
	cout << "f2 = " << f2 << endl;  // 3 * 10 ^ 2
	
	float f3 = 3e-2;
	cout << "f3 = " << f3 << endl;  // 3 * 0.1 ^ 2
	
	

	return 0;
}



