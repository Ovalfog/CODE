#include <iostream>
using namespace std;

int main(){
	bool student[41];
	int n,pos=0,out_student=0,number=1;
	cin>>n;
	for (int i=1;i<=n;i++){
		student[i]=true; 
	}
	while (out_student!=n){
		pos++;
		if (pos==n+1){pos=1;}
		if (student[pos]){
			if (number==3){
				number=0;
				student[pos]=false;
				out_student++;
			}else{
				number++;
			}
		}
	}
	cout << pos << endl;
}
