#include <bits/stdc++.h>
using namespace std;


class Solution{
public:


};


int main(){

	// �㷨����
	Solution s;
	//�����������ӣ��������õ�ǰϵͳʱ������������������ֹÿ���������һ����
	srand((unsigned int) time(NULL)); 
	
	//ϵͳ���������
	cout << "��������²�����֣�" << endl; 
	int num = rand() % 100 + 1; //���������1~100֮�������һ��
	//��ҽ��в²�,������������ 
	int val = 0;
	int count = 5;
	
	while(1)
	{
		cin >> val;
		count--; 
		if(val > num && count != 0)
		{
			cout << "�²����" << endl;
		}
		else if(val < num && count != 0)
		{
			cout << "�²��С��" << endl;	
		}
		else if(val == num && count != 0)
		{
			cout << "��ϲ�����¶��ˣ�" << endl;
			break;
		}
		else
		{
			cout << "�������꣬�²�ʧ�ܣ�" << endl;
		}
	}

	return 0;

}


