// Vetor_to_text_test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;
int main()
{
	string user_input;
	vector<string> user_names;
	vector<string>::iterator iterator;
	bool exit = true;

	do
	{
		char enter_another_name;
		cout << "Please Enter a user name: " << flush;
		cin >> user_input;
		user_names.push_back(user_input);

		if (find(user_names.begin(),user_names.end(),user_input)!=user_names.end())
		{
			user_names.pop_back();
			cout << "That Username already exists." << endl;
		}
		else
		{
			cout << "New User Name created: " << user_input << endl;
		}
		

		if (find(user_names.begin(),user_names.end(),user_input)!=user_names.end())
		{
			user_names.pop_back();
			cout << "That Username already exists." << endl;
		}
		else
		{
			cout << "New User Name created: " << user_input << endl;
		}
		cout << "Would you like to enter another name (Y or N): " << flush;
		cin >> enter_another_name;
		if (enter_another_name=='y'|| enter_another_name == 'Y')
		{
			exit = false;
		}
		else if (enter_another_name == 'n' || enter_another_name == 'N')
		{
			exit = true;
		}
		else { cout << "You entered invalid information!" << endl; }
		


	} while (exit!=true);
	for (iterator = user_names.begin(); iterator != user_names.end(); iterator++)
	{
		cout << *iterator  << endl;
	}


}