#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    float sum = 1;
    float money = 1;
    for(int i = 2; i <= n; i++){
        money *= 1.5;
        sum += money;
    }
	setposition(sum+0.5) << endl;
    return 0;
}

