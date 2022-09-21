#include <iostream>
using namespace std;
int main(){
	int num1, num2, choice;
	cout << "enter two numbers ";
	cin >> num1 >> num2;
	cout <<"select a number for a type of operator will be used" << endl;
	cout <<"1. addition"<<endl;
	cout <<"2. subtraction"<<endl;
	cout <<"3. multiplication"<<endl;
	cout <<"4. division"<<endl;
	cin >> choice;
	

	switch(choice){
	case 1:
		cout << num1<<"+"<<num2<<"= "<<num1+num2;
		break;
	case 2:
		cout << num1<<"-"<<num2<<"= "<<num1-num2;					
		break;
	case 3:
		cout << num1<<"*"<<num2<<"= "<<num1*num2;
		break;
	case 4:
		cout << num1<<"/"<<num2<<"= "<<num1/num2;
		break;
	default:
		cout <<"error you did not select any of those option try agian later";
		break;
	}
return 0;
}
