#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management {
public:

    Management() {
		mainMenu();
	}

};

class Details {
public:
	static string name, gender;
	int phoneNo;
	int age;
	string add;
	static int cId;
	char arr[100];

	void information() {
		cout << "\n Enter the customer ID: ";
		cin >> cId;
		cout << "\n Enter the name of the passenger: ";
		cin >> name;
		cout << "\nEnter the age : ";
		cin >> age;
		cout << "\n Address of the passenger: ";
		cin >> add;
		cout << "\n Gender :";
		cin >> gender;
		cout << "\nYour details are saved with us\n" << endl;
	}
};

int Details::cId;
string Details::name;
string Details::gender;
class registration {
public:
	static int choice;
	int choice1;
	int back;
	static float charges;

	void trains() {
		string trainN[] = { "Bhubaneswar", "Rourkela", "Puri", "Angul" ,"Cuttack"};

		for (int a = 0; a < 5; a++) {
			cout << (a + 1) << ". Train to " << trainN[a] << endl;
		}

		cout << "\nWelcome to the Express! " << endl;
		cout << "Please select the number of  your destination: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\nWelcome to  Bhubaneswar Railways\n"<<endl;
			cout << "Making your journey an unforgettable one .Enjoy the journey!\n" << endl;
			cout << "Following are the trains \n" << endl;
			cout << "1. Rajdhani Express\n"<<endl;
			cout << "\t 03 - 05-2025  10:00 AM  6hrs   Rs. 700\n"<<endl;
			cout << "2. Konark Express\n" << endl;
			cout << "\t 04 - 05-2025  11:00 AM  5hrs   Rs. 600\n" << endl;
			cout << "3. Vande Bharat Express\n" << endl;
			cout << "\t 05 - 05-2025  12:00 PM  4hrs   Rs. 800\n" << endl;

			cout << "\nSelect the train number: ";
			cin >> choice1;

			if (choice1 == 1) {
				charges = 700;
				cout << "\nYou have selected Rajdhani Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
			}
			else if (choice1 == 2) {
				cout << "\nYou have selected Konark Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 600;
			}
			else if (choice1 == 3) {
				cout << "\nYou have selected Vande Bharat Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 800;
			}
			else {
				cout << "\nInvalid choice! shifting to the previous menu.\n" << endl;
				trains();
			}

			cout << "\nPress any key to go back to main menu: " << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {
				mainMenu();
			}
			break;

		case 2:
			cout << "\nWelcome to  Rourkela Railways\n" << endl;
			cout << "Making your journey an unforgettable one .Enjoy the journey!\n" << endl;
			cout << "Following are the trains \n" << endl;
			cout << "1. Garibrath Express\n" << endl;
			cout << "\t 05 - 07-2025  17:00 PM  17hrs   Rs. 1200\n" << endl;
			cout << "2. Ajmer-Puri Express\n" << endl;
			cout << "\t 06 - 07-2025  13:00 PM  20hrs   Rs. 900\n" << endl;
			cout << "3. Vande Bharat Express\n" << endl;
			cout << "\t 09 - 07-2025  18:00 PM  6hrs   Rs. 1600\n" << endl;

			cout << "\nSelect the train number: ";
			cin >> choice1;

			if (choice1 == 1) {
				charges = 1200;
				cout << "\nYou have selected Garibrath Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
			}
			else if (choice1 == 2) {
				cout << "\nYou have selected Ajmer-Puri Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 900;
			}
			else if (choice1 == 3) {
				cout << "\nYou have selected Vande Bharat Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 1600;
			}
			else {
				cout << "\nInvalid choice! shifting to the previous menu.\n" << endl;
				trains();
			}

			cout << "\nPress any key to go back to main menu: " << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {
				mainMenu();
			}
			break;
        
		case 3:

			cout << "\nWelcome to  Puri Railways\n" << endl;
			cout << "Making your journey an unforgettable one .Enjoy the journey!\n" << endl;
			cout << "Following are the trains \n" << endl;
			cout << "1. Howrah-Puri Vande Bharat Express\n" << endl;
			cout << "\t 03 - 11-2025  7:00 AM  9hrs   Rs. 1800\n" << endl;
			cout << "2. Rourkela-Puri Vande Bharat Express\n" << endl;
			cout << "\t 04 - 11-2025  13:00 PM  6hrs   Rs. 1900\n" << endl;
			cout << "3. Vishakhapatnam-Puri Express\n" << endl;
			cout << "\t 06 - 11-2025  18:00 PM  15hrs   Rs. 600\n" << endl;

			cout << "\nSelect the train number: ";
			cin >> choice1;

			if (choice1 == 1) {
				charges = 1800;
				cout << "\nYou have selected Howrah-Puri Vande Bharat Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
			}
			else if (choice1 == 2) {
				cout << "\nYou have selected Rourkela-Puri Vande Bharat Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 1900;
			}
			else if (choice1 == 3) {
				cout << "\nYou have selected Vishakhapatnam-Puri Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 600;
			}
			else {
				cout << "\nInvalid choice! shifting to the previous menu.\n" << endl;
				trains();
			}

			cout << "\nPress any key to go back to main menu: " << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {
				mainMenu();
			}
			break;

		case 4:

			cout << "\nWelcome to  Angul Railways\n" << endl;
			cout << "Making your journey an unforgettable one .Enjoy the journey!\n" << endl;
			cout << "Following are the trains \n" << endl;
			cout << "1. Rourkela-Puri Vande Bharat Express\n" << endl;
			cout << "\t 03 - 11-2025  7:00 AM  3hrs   Rs. 600\n" << endl;
			cout << "2. Sambalpur-Sonepur Express\n" << endl;
			cout << "\t 04 - 11-2025  13:00 PM  4hrs   Rs. 200\n" << endl;
			cout << "3. Bhubaneswar Intercity Express\n" << endl;
			cout << "\t 06 - 11-2025  18:00 PM  3hrs   Rs. 400\n" << endl;

			cout << "\nSelect the train number: ";
			cin >> choice1;

			if (choice1 == 1) {
				charges = 600;
				cout << "\nYou have selected Rourkela-Puri Vande Bharat Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
			}
			else if (choice1 == 2) {
				cout << "\nYou have selected Sambalpur-Sonepur Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 200;
			}
			else if (choice1 == 3) {
				cout << "\nYou have selected Bhubaneswar Intercity Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 400;
			}
			else {
				cout << "\nInvalid choice! shifting to the previous menu.\n" << endl;
				trains();
			}

			cout << "\nPress any key to go back to main menu: " << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {
				mainMenu();
			}
			break;

		case 5:

			cout << "\nWelcome to  Cuttack Railways\n" << endl;
			cout << "Making your journey an unforgettable one .Enjoy the journey!\n" << endl;
			cout << "Following are the trains \n" << endl;
			cout << "1. Balasore-Puri Vande Bharat Express\n" << endl;
			cout << "\t 05 - 03-2025  7:00 AM  8hrs   Rs. 900\n" << endl;
			cout << "2. Ajmer-Puri Express\n" << endl;
			cout << "\t 04 - 03-2025  17:00 PM  18hrs   Rs. 400\n" << endl;
			cout << "3. Rajdhani Express\n" << endl;
			cout << "\t 06 - 06-2025  14:00 PM  13hrs   Rs. 600\n" << endl;

			cout << "\nSelect the train number: ";
			cin >> choice1;

			if (choice1 == 1) {
				charges = 900;
				cout << "\nYou have selected Balasore-Puri Vande Bharat Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
			}
			else if (choice1 == 2) {
				cout << "\nYou have selected Ajmer-Puri Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 400;
			}
			else if (choice1 == 3) {
				cout << "\nYou have selected Rajdhani Express\n" << endl;
				cout << "\nYou can go back to menu and take the ticket\n" << endl;
				charges = 600;
			}
			else {
				cout << "\nInvalid choice! shifting to the previous menu.\n" << endl;
				trains();
			}

			cout << "\nPress any key to go back to main menu: " << endl;
			cin >> back;
			if (back == 1) {
				mainMenu();
			}
			else {
				mainMenu();
			}
			break;

		default:
			cout << "\nInvalid choice! shifting to the main menu.\n" << endl;
			mainMenu();
			break;
		}
     
	}
};


float registration::charges;
int registration::choice;



class ticket:public registration,public Details {
public :
	void Bill() {
		string destinations = "";
		ofstream outf("records.txt");
		{
			outf << "___________________Jayaditya Express_____________________\n" << endl;
			outf << "________________________Ticket_________________________\n" << endl;
			outf << "________________________________________________________\n" << endl;

			outf << "Customer ID: " << Details::cId << endl;
			outf << "Customer Name: " << Details::name << endl;
			outf << "Customer Gender: " << Details::gender << endl;
			outf << "\tDescription" << endl<<endl;
			if (registration::choice == 1) {
				destinations = "Bhubaneswar";
			}
			else if (registration::choice == 2) {
				destinations = "Rourkela";
			}
			else if (registration::choice == 3) {
				destinations = "Puri";
			}
			else if (registration::choice == 4) {
				destinations = "Angul";
			}
			else if (registration::choice == 5) {
				destinations = "Cuttack";
			}

			outf << "Destination  :\t\t" << destinations << endl;
			outf << "Train Cost : \t\t" << registration::charges << endl;

		}
		outf.close();
	}

	void display() {
		ifstream ifs("records.txt");
		if (!ifs) {
			cout << "File error!" << endl;
			return;
		}
		while (ifs.getline(arr, 100)) {
			cout << arr << endl;
		}
		ifs.close();
	}
};


void mainMenu() {
	int lchoice;
	int schoice;
	int back;

	cout << "\t             Jayaditya Express \n"<< endl;
	cout << "\t___________________Main Menu_____________________\n" << endl;
	cout << "\t______________________________________________________" << endl;
	cout << "\t|\t\t\t\t\t                           |" << endl;
	cout << "\t|\t Press 1 to add Passenger Details       \t|" << endl;
	cout << "\t|\t Press 2 to add Train Details          \t|" << endl;
	cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;
	cout << "\t|\t Press 4 to Exit        \t|" << endl;
	cout << "\t______________________________________________________" << endl;

	cout << "\n\tEnter your choice: ";
	cin >> lchoice;

	Details d;
	registration r;
	ticket t;


	switch (lchoice) {
	case 1:
		cout << "__________________Passengers__________________\n" << endl;
		d.information();
		cout << "\n\tPress any key to go back to Main Menu: ";
		cin >> back;

		if (back == 1) mainMenu();
		else mainMenu();
		break;

	case 2:
		cout << "__________________Book train tickets using this system__________________\n" << endl;
		r.trains();
		break;
    
	case 3:
		cout << "__________________GET YOUR TICKET__________________\n" << endl;
		t.Bill();
		cout << "\n\tYour ticket is printed, you can collect it\n" << endl;
		cout << "\tPress 1	to display your ticket\n ";
		cin >> back;
		if (back == 1) {
			t.display();
			cout << "\n\tPress any key to go back to Main Menu: ";
			cin >> back;
			if (back == 1) mainMenu();
			else mainMenu();
		}
		else mainMenu();
		break;

	case 4:
		cout << "\n\n\t________________Thank-you_____________________" << endl;
		break;
	
	default:
		cout << "\n\tInvalid choice! Please try again.\n"<<endl;
		mainMenu();
		break;
	}

	
}

int main() {
	Management Mobj;
	return 0;
}