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

	//�����㷨
	Solution s;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "��������ռ���ڴ�ռ��С��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ:" << sizeof(arr) / sizeof(arr[0]) << endl;
	
	//����ͨ���������鿴�����׵�ַ
	cout << "�����׵�ַΪ��" << (long long)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (long long)&arr[0] << endl; 
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (long long)&arr[1] << endl; 	
	
	
	return 0;
}



