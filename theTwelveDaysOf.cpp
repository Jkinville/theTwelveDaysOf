// theTwelveDaysOf.cpp : A simple program that allows the user to enter 12 iems. 
//The progam then prints the 12 days of christmas song using the users input
//Part of the reddit dailyprogrammer challenge
//[Easy] The Twelve Days of...

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string days[12]
	{ "first",
	 "second",
	 "third",
	 "fourth",
	 "fifth",
	 "sixth",
	 "seventh",
	 "eighth",
	 "ninth",
	 "tenth",
	 "eleventh",
	 "twelfth"
	},
		items[12];
	cout << "Enter the 12 items your lover gave you." << endl;
	for (int cnt = 0; cnt <= 11; ++cnt) {
		getline(cin, items[cnt]);
	}
	for (int cnt = 0; cnt <= 11; ++cnt) {
		cout << "\nOn the " << days[cnt] << "\nday of christmas\nmy true love sent to me:\n";
		for (int cnter = cnt; cnter >= 1; --cnter) {
			cout << cnter + 1 << " " << items[cnter] << endl;
			if (cnter == 1)
				cout << "and ";
		}
		cout << "1 "<< items[0] << endl;
	}
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
    return 0;
}

