#include <iostream>
using namespace std;

int main(){
	int i,j,m,x,n=12,temp[10];
	cin>>m>>x;
	for (i=0;i<m;i++){
		cin>>temp[i]; 
	}
	int number[20];
	for (i=0;i<n;i++){
		cin>>number[i];
	}
	for (i=0;i<m;i++){
		for (j=n-1+i;j>=x-1+i;j--){
			number[j+i]=number[j];
		}
		number[x-1+i]=temp[i];
	}
	for (i=0;i<n+m;i++){
		cout << number[i] << " ";
	}
}
