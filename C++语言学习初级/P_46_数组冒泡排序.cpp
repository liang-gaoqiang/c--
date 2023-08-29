#include <bits/stdc++.h>
using namespace std;

#define TRUE  1
#define FALSE 0
#define OK    1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW   -2




int main(){

	//测试算法
	int arr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	
	cout << "数组排序前:";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	cout << "数组冒泡排序:" << endl;
	for (int i = 0; i <= n ; i++)
	{
		for (int j = 0; j <= n - i; j++)
		{
			if(arr[j] < arr[j+1])
			{
				int temp = arr[j];
				arr[j]  = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	cout << "数组排序后:";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	

	return 0;
}



