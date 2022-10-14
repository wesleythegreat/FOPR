#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "AGE AND STAGES" << endl;
	cout << "0 - 1 BABY" << endl;
	cout << "2 - 3 TOODLER" << endl;
	cout << "4 - 5 PRESCHOOLER" << endl;
	cout << "6 - 12 GRADE SCHOOLER" << endl;
	cout << "13 - 18 TEENAGER" << endl;
	cout << "19 - 21 YOUNG ADULT" << endl;
	cout << "22 - 59 ADULT" << endl;
	cout << "60 AND ABOVE SENIOR CITIZEN" << endl;

	cout << "Enter Age: ";
	cin >> age;
	cout << "STAGES OF LIFE: ";

	switch (age)
	{
	case 0 ... 1:
		cout << "baby";
		break;
	case 2 ... 3:
		cout << "TOODLER";
		break;
	case 4 ... 5:
		cout << "preschooler";
		break;
	case 6 ... 12:
		cout << "GRADE SCHOOLER";
		break;
	case 13 ... 18:
		cout << "TEENAGER";
		break;
	case 19 ... 21:
		cout << "YOUNG ADULT";
		break;
	case 22 ... 59:
		cout << "ADULT";
		break;
	case 60 ... 1000 :
		cout << "SENIOR CITIZEN";
		break;
	}
	return 0;
}