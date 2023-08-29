#include <bits/stdc++.h>
using namespace std;


class Solution{
public:


};


int main(){

	// 算法测试
	Solution s;
		int score = 0;
	cout << "请输入一个分数:" << endl;
	cin >> score;
	cout << "您输入的分数是" << score << endl;
	if(score >= 600)
	{
		cout << "恭喜你考上了一本大学" << endl;
	}else if(score > 500){
		cout << "恭喜你考上了二本大学" << endl;
	}else if(score > 400){
		cout << "恭喜你考上了三本大学" << endl;
	}else{
		cout << "可怜！没有考上大学" << endl;
	}

	return 0;

}


