#include <bits/stdc++.h>
using namespace std;


class Solution{
public:


};


int main(){

	// �㷨����
	Solution s;
	
	int num1 = 0, num2 = 0, num3 = 0;
	cout << "������С��A������" << endl;
	cin >> num1; 
	cout << "������С��B������" << endl;
	cin >> num2; 
	cout << "������С��C������" << endl;
	cin >> num3; 
	
	cout << "С��A��������:" << num1 << endl;
	cout << "С��B��������:" << num2 << endl;
	cout << "С��C��������:" << num3 << endl;
	
	
	if(num1 > num2)
	{
		if(num1 > num3)
		{
			cout << "С��A���أ�" << endl;
		}else{
			cout << "С��C���أ�" << endl;
		}
	}else{
		if(num2 > num3)
		{
			cout << "С��B���أ�" << endl;
		}else{
			cout << "С��C���أ�" << endl;
		} 
	}
	
	
	return 0;

}


