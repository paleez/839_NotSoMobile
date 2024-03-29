// 839_NotSoMobile_DennisNilsson.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
bool balance;
int input()
{
	int w1, d1, w2, d2;
	cin >> w1 >> d1 >> w2 >> d2;
	if (w1 == 0) w1 = input();
	if (w2 == 0) w2 = input();
	if (w1*d1 != w2 * d2) balance = false;
	return w1 + w2;
}
int main()
{
	int caseN;
	int wait;
	cin >> caseN;
	while (caseN--)
	{
		balance = true;
		input();
		if (balance)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		if (caseN)
			cout << endl;
	}
	std::cin >> wait;
	return 0;
}



/*
This problem is about more-or-less simple recursion.
At first, the recursive function shall input all four numbers. If Wi==0, then Wi=recursion() [for i from {0,1}].
After this, we check, whether W0*D0==W1*D1 - if not, we mark "FAIL" and print "NO" (after). 
Then we return weight of subtree (W0+W1).
If none fail occured, we print "YES", otherwise "NO"

Good Luck!*/

