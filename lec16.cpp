#include<iostream>
using namespace std;
int add(int,int);
//int main(){
//	int a,b;
//	cin>>a>>b;
//	int res=add(a,b);
//	cout<<res;
//}
int add(int a,int b){
	return a+b;
}
int increm(int a){
	return ++a;
}
int main(){
	int a;
	cin>>a;
	int red=increm(a);
	cout<<red<<endl;
	cout<<a;
	
	
}
