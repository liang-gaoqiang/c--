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

	//测试算法
	Solution s;
	
	cout << "数组逆置前：";
	int arr[10] = {1, 2, 3 ,4, 5, 6 , 7, 8 ,9 ,10};
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	} 
	cout << endl;
	
	//数组逆置
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		//下标移动
		start++; end--; 
	} 
	
	//数组逆置后
	cout << "数组逆置后：";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	} 
	cout << endl;	 
	return 0;
}



