#include <bits/stdc++.h>
using namespace std;


class Solution{
public:


};


int main(){

	// 算法测试
	Solution s;
	//添加随机数种子，作用利用当前系统时间随机生成随机数，防止每次随机数都一样。
	srand((unsigned int) time(NULL)); 
	
	//系统生成随机数
	cout << "请您输入猜测的数字：" << endl; 
	int num = rand() % 100 + 1; //生成随机数1~100之间随机的一个
	//玩家进行猜测,玩家输入的数据 
	int val = 0;
	int count = 5;
	
	while(1)
	{
		cin >> val;
		count--; 
		if(val > num && count != 0)
		{
			cout << "猜测过大！" << endl;
		}
		else if(val < num && count != 0)
		{
			cout << "猜测过小！" << endl;	
		}
		else if(val == num && count != 0)
		{
			cout << "恭喜，您猜对了！" << endl;
			break;
		}
		else
		{
			cout << "次数用完，猜测失败！" << endl;
		}
	}

	return 0;

}


