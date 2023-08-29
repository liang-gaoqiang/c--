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
	int scores [3][3] = 
	{
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};
	string names[3] = {"张三", "李四", "王五"};
	int sum = 0; 
	//打印二维数组
	for(int i = 0; i < 3; i ++)
	{
		for(int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
//			cout << scores[i][j];
		}
		cout << names[i] << "第 " << i +1 << "个人总分为：" << sum << endl;
	} 

	return 0;
}



