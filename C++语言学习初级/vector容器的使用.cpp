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
	
	vector<int>::iterator it; //�������������it
	for(it=myv.begin(); it != myv.end(); it++){ //��ͷ��β�������е�Ԫ�� 
		cout<<*it<<" "; //��ӡ���1 2 3 
	} 
	cout<<endl;  //���� 
	vector<int>:: reverse_iterator rit; //���巴������� 
	for(rit=myv.rbegin(); rit!= myv.rend(); rit++){  //��β��ͷ�������е�Ԫ�� 
		cout<<*rit<<" ";  //��ӡ��� 3 2 1 
	}
	cout<<endl; //���� 
	return 0;
}


