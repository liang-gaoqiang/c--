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

	//�����㷨
	Solution s;
	int scores [3][3] = 
	{
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};
	string names[3] = {"����", "����", "����"};
	int sum = 0; 
	//��ӡ��ά����
	for(int i = 0; i < 3; i ++)
	{
		for(int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
//			cout << scores[i][j];
		}
		cout << names[i] << "�� " << i +1 << "�����ܷ�Ϊ��" << sum << endl;
	} 

	return 0;
}



