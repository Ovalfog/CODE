#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	if (s1>s2){
		//≤È’“
		cout << s1.find(s2); 
	}else if {
		//ÃÊªª 
		cout << s1.replace(2,3,s2);
	}else{
		//∑¥◊™
		reverse(s1.begin(),s1.end());
		reverse(s2.begin(),s2.end());
		cout << s1 << endl << s2
	}
} 
