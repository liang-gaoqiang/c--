#include <bits/stdc++.h>
using namespace std;

#define TRUE  1
#define FALSE 0
#define OK    1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW   -2




int main(){
	vector<int> myv; //����vector����myv
	vector<int>:: iterator it; //����myv�����������it
	
	myv.push_back(1);//��myvĩβ���Ԫ��1
	it = myv.begin();//it������ָ��ͷԪ��1
	myv.insert(it,2);//��itָ���Ԫ��֮ǰ����Ԫ��2
	myv.push_back(3);//��myvĩβ���Ԫ��3
	myv.push_back(4);//��myvĩβ���Ԫ��4
	it = myv.end();//it������ָ��βԪ��4�ĺ���
	it--;//it������ָ��βԪ��4
	myv.erase(it);		//ɾ��Ԫ��4
	for(it=myv.begin();it!=myv.end();++it){
		cout<<*it<<" ";  //��ӡ��� 2 1 3 
	}
	cout<<endl;


	return 0;
}


