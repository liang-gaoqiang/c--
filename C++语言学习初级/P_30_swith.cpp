#include <bits/stdc++.h>
using namespace std;


class Solution{
public:


};


int main(){

	// 算法测试
	Solution s;
	//给一个电影打分
	int score = 0;
	cin >> score;
	cout << "您给电影打分为：" << score << "分" << endl;
	
	switch(score)
	{
		case 10:
			cout << "您认为是经典电影" << endl;
			break;
		case 9:
			cout << "您认为是经典电影" << endl;
			break;
		case 8:
			cout << "您认为电影非常好" << endl;
			break;
		case 7:
			cout << "您认为电影非常好" << endl;
			break;
		case 6:
			cout << "您认为电影一般" << endl;
			break;	
		case 5:
			cout << "您认为电影一般" << endl;
			break;	
		default:
			cout << "您认为电影是烂片" << endl;
			break;			
	} 
	// swith比if执行效率高
	//switc 

	return 0;

}


