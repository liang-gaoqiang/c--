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


int main(void){

	//测试算法
	Solution s;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "整个数组占用内存空间大小：" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中元素个数为:" << sizeof(arr) / sizeof(arr[0]) << endl;
	
	//可以通过数组名查看数组首地址
	cout << "数组首地址为：" << (long long)arr << endl;
	cout << "数组中第一个元素地址为：" << (long long)&arr[0] << endl; 
	cout << "数组中第二个元素地址为：" << (long long)&arr[1] << endl; 	
	
	
	return 0;
}



