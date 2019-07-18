
using namespace std;

#include <iostream>
#include <cstdlib>
#include <string>

int main() {

	int numOfSubjects = 0;
	int weekendSit = 0;

	string whatDay = "";
	string subject = " subjects, ";

	double howMuch = 0;

	cout << "Enter the number of subjects: ";
	cin >> numOfSubjects;
	cout << endl;

	cout << "Will the sitting be on a weekend? (0 = no, 1 = yes) : ";
	cin >> weekendSit;
	cout << endl;

	system("pause");
	return 0;
}