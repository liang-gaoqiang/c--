#include <bits/stdc++.h>
using namespace std;


class Solution{
public:


};


int main(){

	// �㷨����
	Solution s;
		int score = 0;
	cout << "������һ������:" << endl;
	cin >> score;
	cout << "������ķ�����" << score << endl;
	if(score >= 600)
	{
		cout << "��ϲ�㿼����һ����ѧ" << endl;
	}else if(score > 500){
		cout << "��ϲ�㿼���˶�����ѧ" << endl;
	}else if(score > 400){
		cout << "��ϲ�㿼����������ѧ" << endl;
	}else{
		cout << "������û�п��ϴ�ѧ" << endl;
	}

	return 0;

}


