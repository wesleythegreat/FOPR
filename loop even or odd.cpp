#include <iostream>
using namespace std;

int main(){
	for (int i=10; i>0;i--){
		if (i == 0) {
		cout<< i<<" is even"<<endl;
        }
        else if (i % 2 == 0) {
		cout << i << " is even"<<endl;   
        }
        else {
		cout << i << " is odd"<<endl;
        }
		}
	}
