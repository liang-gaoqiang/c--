#include <bits/stdc++.h>
using namespace std;


class Solution{
public:


};


int main(){

	// �㷨����
	Solution s;
	int num = 100;
	int a = 0, b = 0, c = 0;
	do
	{
		a = num / 100;  //��λ���� 
		b = (num / 10) % 10; //ʮλ���� 
		c = num % 10;  //��λ����
		if(pow(a, 3) + pow(b, 3) + pow(c, 3) == num)
		{
			cout << num << " ";
		} 
		num++;
			
	}while(num < 1000);
	cout << endl;
	return 0;

}


