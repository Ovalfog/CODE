//自定义函数
#include <iostream>
#include <cmath>
using namespace std;

bool check(int d,int n){
	while (n){
		if (n%10==d){return 1;}
		else{n/=10;}
	}
	return 0;
	
}

int main(){
	int d,n;
	cin>>n>>d;
	if (check(d,n)==1){
		cout << "yes";
	}else{
		cout << "no";
	}
}
