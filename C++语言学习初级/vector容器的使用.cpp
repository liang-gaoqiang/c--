#include <bits/stdc++.h>
using namespace std;

#define TRUE  1
#define FALSE 0
#define OK    1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW   -2



int main(){
	vector<int> myv;
	myv.push_back(1);
	myv.push_back(2);
	myv.push_back(3);
	
	vector<int>::iterator it; //定义正向迭代器it
	for(it=myv.begin(); it != myv.end(); it++){ //从头到尾遍历所有的元素 
		cout<<*it<<" "; //打印输出1 2 3 
	} 
	cout<<endl;  //换行 
	vector<int>:: reverse_iterator rit; //定义反向迭代器 
	for(rit=myv.rbegin(); rit!= myv.rend(); rit++){  //从尾到头遍历所有的元素 
		cout<<*rit<<" ";  //打印输出 3 2 1 
	}
	cout<<endl; //换行 
	return 0;
}


