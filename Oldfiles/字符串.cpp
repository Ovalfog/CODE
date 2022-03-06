//字符型数字与整数数字的十进制的差值为48 
#include <iostream>
#include <cstring> 
using namespace std;

int main(){
	char s1[200],s2[200];
	cin.getline(s1,200);cin.getline(s2,200);
	if (strcmp(s1,s2)==1){
		strcat(s2,s1);
		cout << s2 << endl;
	}else if (strcmp(s1,s2)==0){
		strupr(s1);
		strlwr(s2);
		cout << s1 << '\n' << s2;
	}else{
		strcat(s1,s2);
		cout << s1 << endl;
	}
}
