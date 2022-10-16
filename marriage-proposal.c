#include <iostream>
using namespace std;

int main()
{
	char q1, q2, q3, q4,cont;
	string last,legal;
	cout << "Details:";
	cout << "We created this app to test and reward true fans fo harry potter!\nThis prmotion will award a limited number of fans free tickets to set harry potter and th deathly hallows on opening night [11/19/2019].\nTo win, all you need to do is complete the quiz!\nYou'll never be contacted for any other purpose, its our gift to you, Just tell your friends how much you liked the move!" << endl;
	cout << "type 'N' to continue" << endl;
	cin >> cont;
	cout << "\n";
	cout << "\nLegal stuff" << endl;
	cout << "* No purchase necessary\n* Prizes awarded on a First come first served basis\n* Must be 18 years or older \n* your personal information will never be released to 3rd parties" << endl;
	cout << "harry potter is a registred trademark of time warner entertainment company, L.P." << endl;
	cout << "type: (agree)/(quit)" << endl;
	cin >> legal;
	if (legal == "agree") {
		cout << "\nWhat's the name of Harry's owl?" << endl;
		cout << "a. fluffy \nb. Hedwig \nc. Fawkes \nd. Fawkes" << endl;
		cin >> q1;
		switch (q1) {
		case 'a':
			cout << "wrong!" << endl;
			break;
		case 'b':
			cout << "correct!" << endl;
			break;
		case'c':
			cout << "wrong1" << endl;
			break;
		case'd':
			cout << "wrong!" << endl;
			break;
		default:
			cout << "your answer is not on the choices" << endl;
			break;
		}

		cout << "\nWho was driving the car that saved harry from being locked up in his room at the Dursley's house?" << endl;
		cout << "a. George \nb. Fred \nc. Ron \nd. Ginny" << endl;
		cin >> q2;
		switch (q2) {
		case 'a':
			cout << "wrong!" << endl;
			break;
		case 'b':
			cout << "correct!" << endl;
			break;
		case'c':
			cout << "wrong!" << endl;
			break;
		case'd':
			cout << "wrong!" << endl;
			break;
		default:
			cout << "your answer is not on the choices" << endl;
			break;
		}

		cout << "\nWhat position on the Quiddithch team does Ron play?" << endl;
		cout << "a. Seeker \nb. Keeper \nc. Chaser \nd. Beater" << endl;
		cin >> q3;
		switch (q3) {
		case 'a':
			cout << "wrong!" << endl;
			break;
		case 'b':
			cout << "correct!" << endl;
			break;
		case'c':
			cout << "wrong!" << endl;
			break;
		case'd':
			cout << "wrong!" << endl;
			break;
		default:
			cout << "your answer is not on the choices" << endl;
			break;
		}

		cout << "\nIn the Half-Blood Price, who is the new Minister of Magic?" << endl;
		cout << "a. cornelius Fudge \nb. Rufus Scrimgeour \nc. Amelia Bones \nd.Kingsley Shaklebot" << endl;
		cin >> q4;
		switch (q4) {
		case 'a':
			cout << "wrong!" << endl;
			break;
		case 'b':
			cout << "correct!" << endl;
			break;
		case'c':
			cout << "wrong!" << endl;
			break;
		case'd':
			cout << "wrong!" << endl;
		default:
			cout << "your answer is not on the choices." << endl;
			break;
		}

		cout << "\nWill You Merry me?" << endl;
		cout << "Yes or No" << endl;
		cin >> last;
		if (last == "yes") {
			cout << "\nand so begins the next chapter..." << endl;
			cout << "A message has been sent to Jon to give him the wonderful news!" << endl;
		}
		else {
			cout << "Oh no! You killed Dumbledore.";

		}
	}
	else {
		return 0;
	}
	return 0;
}

