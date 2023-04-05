#include <iostream>
#include <fstream> 
#include<iomanip>
#include<windows.h>

using namespace std;

class Customers
{
public:

	string name, gender, address;
	int age, mobileno, cusID;
	char all[999];
	void detDetails()
	{
		ofstream out("old-customer.txt", ios::app);
		{
			cout << "Enter Customer ID : ";
			cin >> cusID;
			cout << "Enter Customer Name : ";
			cin >> name;
			cout << "Enter Customer Age : ";
			cin >> age;
			cout << "Enter Customer Mobile Number : ";
			cin >> mobileno;
			cout << "Enter Customer Address : ";
			cin >> address;
			cout << "Enter Customer Gender : ";
			cin >> gender;
		}
		out << "\nCustomer ID" << cusID << "\nName: " << name << "\nAge: " << age << "\nMobile Number : " << mobileno << "\nAddress: " << address << "\nGender : " << gender << endl;
		out.close();
		cout << "\nSaved \nNOTE: We saved your details record for future purpose\n " << endl;
	}

	void showDetails() {
		ifstream in("old-customers.txt");
		{
			if (!in) {
				cout << "File Erroer!" << endl;
			}
			while (!(in.eof()))
			{
				in.getline(all, 999);
				cout << all << endl;
			}
			in.close();
		}
	}
};


class Cabs
{
public:
	int cabChoice;
	int kilometers;
	float cabCost;
	float lastCabCost;
	void cabDetails() {
		cout << "We collerborated with fastest,safest and smartest cab services around the country" << endl;
		cout << "--------------------ABC Cabs---------------------" << endl;
		cout << "1. Rent a standerd Cab -Rs-15 for 1km" << endl;
		cout << "2. Rent a Luxury Cab -Rs-25 per 1km" << endl;
		cout << "\n To calculate the cost for your journey " << endl;
		cout << "Enter which can you need: ";

		cin >> cabChoice;

		cout << "Enter kilometers you have to travel";
		cin >> kilometers;

		int hireCab;
		if (cabChoice == 1) {
			cabCost = kilometers * 15;
			cout << "/Your tour cost " << cabCost << "Rupees for a standered cab" << endl;
			cout << "Press 1 to hire this cab or";
			cout << "Press 2 to select anouther cab";
			cin >> hireCab;

			system("CLS");

			if (hireCab == 1) {
				lastCabCost = cabCost;
				cout << "\n You have successfully hired standered cab" << endl;
				cout << "go to menu and take the reciept" << endl;
			}
			else if (hireCab == 2) {
				cabDetails();
			}
			else {
				cout << "Invalid Input Redirecting to prevoius menu Wait! !" << endl;
				sleep(999);
				system("CLS");//clear terminal
				cabDetails();
			}
		}
		else if (cabChoice == 2) {
			cabCost = kilometers * 25;
			cout << "/Your tour cost " << cabCost << "Rupees for a standered cab" << endl;
			cout << "Press 1 to hire this cab or";
			cout << "Press 2 to select anouther cab";
			cin >> hireCab;

			system("CLS");

			if (hireCab == 1) {
				lastCabCost = cabCost;
				cout << "\n You have successfully hired standered cab" << endl;
				cout << "go to menu and take the reciept" << endl;
			}
			else if (hireCab == 2) {
				cabDetails();
			}
			else {
				cout << "Invalid Input Redirecting to prevoius menu Wait! !" << endl;
				sleep(1100);
				system("CLS");//clear terminal
				cabDetails();
			}
		}
		else {
			cout << "Invalid Input Redirecting to Main menu \n Please Wait! !" << endl;
			sleep(1100);
			system("CLS");//clear terminal
			menu();
		}
		cout << "\n Press 1 to Redirect Main menu: ";
		cin >> hireCab;
		system("CLS");
		if (hireCab == 1) {

		}
	}
};


class Charges
{
public:


private:

};





int main() {
	cout << "Hello World!" << endl;
	return 0;
}
