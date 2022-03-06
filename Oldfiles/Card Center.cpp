#include <iostream>
#include <cstdlib>
#include <time.h> 
using namespace std;

int main(){
	char cards[]="AAAA3333444455556666777788889999XXXXJJJJQQQQKKKK2222<>";
	int turns=0,n=0,cnt=0;
	char t[1]; 
	srand(time(0));
	for (int i=0;i<54;i++){
		if (turns==4){cout << endl;turns=0;}
		else{
			nullcard:
			n=rand() % 53;
			if (cards[n]=='#'){goto nullcard;}
			else{
				printf("[%d]%c ",i+1,cards[n]);
				cards[n]='#'; 
			}
		}
		turns++; 
	}
	for (int i=0;i<54;i++){
		cout << cards[i] << ' ';
	}
	while(cin.get()!='~'){
		cnt=0;
		cin>>t[0];
		for (int i=0;i<54;i++){
			if (cards[i]==t[0]){
				cnt++;	
			}
		}
		cout << "你输入了 " << t[0] << " ，它在cards中出现了" << cnt << "次: "; 
	}
}
