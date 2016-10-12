// This program demonstrates the && logical operator.

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	//----Var's-------------------------------------------

	char employed,	// Currently employed? Y or N
		recentGrad;	// Recent Graduate.

	//----Is the user employed and a recent graduate-------

	cout << "Answer the following questions\n"
		<< "with either Y for Yes or N for No.\n"
		<< "Are you employed? ";
	cin >> employed;

	cout << "Have you graduated from college "
		<< "in the past two years? ";
	cin >> recentGrad;

	//----Determine the user's loan qualifications--------

	if (employed == 'Y' && recentGrad == 'Y') // yes-employed & yes-recentGrad
	{
		cout << "You qualify for the special "
			<< " interest rate. \n";
	}
	else // not employed 'OR' recentGrad
	{
		cout << "You must be emplyed and have \n"
			<< "graduated from college in the \n"
			<< "past two years to qualify. \n";
	}

    return 0;
}

