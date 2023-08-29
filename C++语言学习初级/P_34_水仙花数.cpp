#include <bits/stdc++.h>
using namespace std;


class Solution{
public:


};


int main(){

	// 算法测试
	Solution s;
	int num = 100;
	int a = 0, b = 0, c = 0;
	do
	{
		a = num / 100;  //百位数字 
		b = (num / 10) % 10; //十位数字 
		c = num % 10;  //个位数字
		if(pow(a, 3) + pow(b, 3) + pow(c, 3) == num)
		{
			cout << num << " ";
		} 
		num++;
			
	}while(num < 1000);
	cout << endl;
	return 0;

}


