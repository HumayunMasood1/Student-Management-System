#include<iostream>
#include<string>
using namespace std;

struct student {
	string departement;
	string name;
	string address;
	string fathername;
	int rollno = 0;
	float mark1;
	float mark2;
	float mark3;
	double total;
};

void successmessage(string message) {
	cout << endl;
	cout << "********** SUCCESS **********" << endl;
	cout << "* " << message << " *" << endl;
	cout << "" << endl;
	cout << endl;
}

void addstudent(student& s) {

	cout << "Enter the Departement :" << endl;
	cin >> s.departement;

	cout << "Enter the name :" << endl;
	cin >> s.name;

	cout << "Enter the father name:" << endl;
	cin >> s.fathername;

	cout << "Enter the address :" << endl;
	cin >> s.address;

	cout << "Enter the rollnumber :" << endl;
	while (!(cin >> s.rollno)) {
		cout << "Invalid input! Please enter a valid integer for roll number:" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}

	cout << "Enter the marks in CP :" << endl; 
	while (!(cin >> s.mark1)) {
		cout << "Invalid input! Please enter a valid number for marks in CP:" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}

	cout << "Enter the marks in CF :" << endl;
	while (!(cin >> s.mark2)) {
		cout << "Invalid input! Please enter a valid number for marks in CF:" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}

	cout << "Enter the marks in FE :" << endl;
	while (!(cin >> s.mark3)) {
		cout << "Invalid input! Please enter a valid number for marks in FE:" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}

	s.total = s.mark1 + s.mark2 + s.mark3;
	cout << "The total gpa is :" << s.total << endl;

	successmessage("Student details saved successfully.");
}

void viewstudent(const student& s) {

	cout << "The Departement is :" << s.departement << endl;
	cout << "Name :" << s.name << endl;
	cout << "Father Name :" << s.fathername << endl;
	cout << "Address is :" << s.address << endl;
	cout << "Rollnumber :" << s.rollno << endl;
	cout << "Marks In CP :" << s.mark1 << endl;
	cout << "Marks in CF :" << s.mark2 << endl;
	cout << "Marks in FE :" << s.mark3 << endl;
	cout << "Total GPA :" << s.total << endl;

}

int main() {
	student s;
	int choice;
	do
	{
		cout << "\n ** Welcome To Student Management System ** " << endl;
		cout << "\n Student Details \n" << endl;
		cout << "1.for add student " << endl;
		cout << "2. for view details " << endl;
		cout << "3.for exiting " << endl;
		cout << "enter your choice " << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			addstudent(s);
			break;
		case 2:
			viewstudent(s);
			break;
		case 3:
			cout << "Exiting the program" << endl;
			break;
		default:
			cout << "invalid input" << endl;
		}
	} while (choice != 3); {

	}

	return 0;
}