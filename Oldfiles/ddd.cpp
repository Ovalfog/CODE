#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
string x,y,p,q;

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	p=q=" ";
	int lenx = x.size();
	int leny = y.size();
	for (int i=0;i<lenx;i++){
		if (x[i] >= 'A' && x[i] <= 'Z'){
			x[i] += 32;
		}
		if (x[i]!=' ') p+=x[i];
	}
	for (int i=0;i<leny;i++){
		if (y[i] >= 'A' && y[i] <= 'Z'){
			y[i] += 32;
		}
		if (y[i]!=' ') q+=x[i];
	}
	if (p==q) cout << "YES";
	else cout << "NO";
	return 0; 
}
