#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string code[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};
	char letters[]="abcdefghijklmnopqrstuvwxyz1234567890";string input;
	string p="";string text="";
	input.clear();
	system("cls");
	getline(cin,input);
	for (int i=0;i<input.size();i++){
		if (input[i]=='/'){
			for (int j=0;j<36;j++){
				if (p==code[j]){
					text+=letters[j];
					p.clear();
					break;
				}
			}
		}else{
			p+=input[i];
		}
	}
	cout << "\n" << text << endl;
}
