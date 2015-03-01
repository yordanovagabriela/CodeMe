#include<iostream>
using namespace std;
int main() {
	cout << "Choose one drink from the list\nCoca Cola(1)\nPepsi(2)\nWater(3)\nSprite(4)\nJuice(5)";
	short int choice;
	cin >> choice;
	if (choice<1 || choice>5) {
		cout << "Error. choice was not valid, here is your money back.";
	}
	switch (choice) {
	case 1: cout << "You chose Coca Cola" << endl;
	case 2: cout << "You chose Pepsi" << endl;
	case 3: cout << "You chose Water" << endl;
	case 4: cout << "You chose Sprite" << endl;
	case 5: cout << "You chose Juice" << endl;
	}
	return 0;
}