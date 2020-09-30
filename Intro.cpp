#include "Intro.h"

void displayIntro() {
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "~~~~~~~~~~~~~~Welcome to the Murder Myster~~~~~~~~~~~~~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "\t    Press any key to play !!!!!!!!!!" << endl;
	system("pause >nul");
	displayRule();
}
void displayRule() {
	system("cls");
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~This is game rule ~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Graaaaaaaaaaaaaaaaaaaaaah!!!!!!!!!!!!!!!!!. You are\n";
	cout << "the most famous dectective in the world that can solve \n";
	cout << "any crime within a day. This time you are solving a \n";
	cout << "murderer case from a millionaire mansion. Detective,\n";
	cout << "there are 7 people in the mansion but one will commit \n";
	cout << "crime and one will be the victims. One useful\n";
	cout << "information is all the suspeect will have their alibi\n";
	cout << "paired together by two and the murderer will choose \n";
	cout << "alone person to alibi with. Your mission is, look for \n";
	cout << "the place where murderer taken and find the item that \n";
	cout << "have blood trace on it.\n";
	cout << "Pray yourself murderer, I will bring you to justice!\n\n";
	
	cout << "Shall we begin? press any key to begin solving crime! \n";
	system("pause> nul");
}
