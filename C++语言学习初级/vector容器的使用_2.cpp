#include <bits/stdc++.h>
using namespace std;

#define TRUE  1
#define FALSE 0
#define OK    1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW   -2




int main(){
	vector<int> myv; //定义vector容器myv
	vector<int>:: iterator it; //定义myv的正向迭代器it
	
	myv.push_back(1);//在myv末尾添加元素1
	it = myv.begin();//it迭代器指向开头元素1
	myv.insert(it,2);//在it指向的元素之前插入元素2
	myv.push_back(3);//在myv末尾添加元素3
	myv.push_back(4);//在myv末尾添加元素4
	it = myv.end();//it迭代器指向尾元素4的后面
	it--;//it迭代器指向尾元素4
	myv.erase(it);		//删除元素4
	for(it=myv.begin();it!=myv.end();++it){
		cout<<*it<<" ";  //打印结果 2 1 3 
	}
	cout<<endl;


	return 0;
}


