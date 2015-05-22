/*
 *  Question5.cpp
 *
 *  Name: TOM PEACE EDEM
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: PDS/2013/2374
 *
 *  Program that calculates the squares and cubes of the integers from 0 to 10
 *
 *  Stub file to enable you complete assignment #1 - question #5
 */
	
	#include <iostream>
	#include <math.h> // library to use pow() function to calculate squares and cubes
	#include <iomanip> 
	using namespace std;
	
		
	int main()
	{
	
	// display welcome messages to user
	cout << "Welcome - This program calculates the squares and cubes\n";
	cout << "of the integers from 0 to 10 and prints using tabs\n\n";
	
	// TODO: Hint use pow(base, power) to calculate squares and cubes
	// Put code here ...
			cout<<"Integer"<<"   Square"<<"   Cube"<<endl;
	int int_num;
	for(int_num=0; int_num<=10; int_num++)
	{
	cout<<int_num<<setw(12);
	cout<<pow(int_num,2)<<setw(10);
	cout<<pow(int_num,3)<<endl;
	}
	
	cout << "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
