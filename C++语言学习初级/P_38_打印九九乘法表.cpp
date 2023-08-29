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
	//i代表行数，j代表列数 
	for (int i = 1; i < 10; i++)
	{
//		cout << i << endl;
		for (int j = 1; j <= i; j++)
		{
//			cout << j;
			cout << j << "x" << i << "=" << j * i << " ";
		}
		cout << endl;
	}

	return 0;
}



