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
	int arr[] = {100, 200, 350, 450, 550};
	int max_arr = arr[0];
	int max_index = 0;
	for (int i = 0; i < 5; i++)
	{
		if(max_arr < arr[i]){
			max_arr = arr[i];
			max_index = i;
		}
	}
	cout << "����ֻС�����ص��ǵ�" << max_index + 1 << "ֻС��,��" << max_arr << "Kg" << endl; 

	return 0;
}



