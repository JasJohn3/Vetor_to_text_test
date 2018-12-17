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
	vector<string> user_data;
	vector<string>::iterator iterator;
	bool exit = true;

	do
	{
		char Leave_Loop;
		cout << "Please Enter a user name: " << flush;
		cin>>user_input;
		user_data.push_back(user_input);


		/*

		function does not work.  Removing from the program to continue work.  

		Function was designed to search through the Vector user_data and compare if the user input already exists.

		The function worked correctly the first time it was compiled and now no longer works.  I am removing to continue with the build.

		if (find(user_data.begin(), user_data.end(), user_input)!=user_data.end())
		{
			user_data.pop_back();
			cout << "User Name already Exists" << endl;
		}
		else{cout << "New User Name Created: " << user_input << endl;}

		Function always returns true.  Uncertain as to why?
		iterator = find(user_data.begin(), user_data.end(), user_input);
		if ( iterator != user_data.end())
		{
			user_data.pop_back();
			cout << "User Name already Exists" << endl;
		}
		lse { cout << "New User Name Created: " << user_input << endl; }
		
		Third and final attempt.  Erases all data in the vector.
		auto it = find(user_data.begin(), user_data.end(), user_input);
		if (it != user_data.end())
			user_data.erase(it);
		
		*/
		cout << "Would you like to enter another name (Y or N): " << flush;
		cin >> Leave_Loop;
		if (Leave_Loop=='y'|| Leave_Loop == 'Y')
		{
			exit = false;
		}
		else if (Leave_Loop == 'n' || Leave_Loop == 'N')
		{
			exit = true;
		}
		else { cout << "You entered invalid information!" << endl; }
		


	} while (exit!=true);
	for (iterator = user_data.begin(); iterator != user_data.end(); iterator++)
	{
		cout << *iterator  << endl;
	}


}