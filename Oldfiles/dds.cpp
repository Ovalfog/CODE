#include <iostream>
using namespace std;

int main(){
	float array[11],m;
	bool flag=false;
	for (int i=0;i<10;i++){
		cin>>array[i];
	}
	cin>>m;
	for (int i=0;i<10;i++){
		if (array[i]==m){
			flag=true;
			for (int j=i;j<9;j++){
				array[j]=array[j]+1;
			}
		}else{
			flag=false;
			break;
		}
	} 
	if (flag){
		cout << "YES" << endl;
		for (int i=0;i<10;i++){
			cout << array[i] << ' ';
		}
	}else{
		cout << "NO" << endl;
	}
}
