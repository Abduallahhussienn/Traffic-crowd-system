#include <iostream>

using namespace std;


//The Stored Information Of The Fines
struct Information_Of_Fines_On_The_Car {
	int Value_Of_The_Fines_On_Car;
	string Street_Of_Fines_Name;
	string Date_Of_Fines;
	string Status_Of_Fines;
};

//The Stored Information Of The Cars
struct Informations_Of_Car {
	int Plate_Number_Of_Car;
	string Model_Of_Car;
	int Production_Year_Of_Car;
	Information_Of_Fines_On_The_Car Recorded_Fines[5];
};

//The Stored Information Of The Driver
struct Informations_Of_Driver {
	double License_Number_Of_Driver;
	string Name_Of_Driver;
	string Birthdate_Of_Driver;
	Informations_Of_Car Cars_Of_Driver[5];
} Driver[5];


//Search For Data Of Specific Car
void Search_For_Specific_Car(Informations_Of_Driver Driver[5]);

//Know The Total Fines On Specific Driver
void Total_Fines_On_Driver(Informations_Of_Driver Driver[5]);

//Pay All Fines For Specific Car
void Pay_Fines_For_Specific_Car(Informations_Of_Driver Driver[5]);

//Add Fines On Specific Car
void Add_Fines_On_Specific_Car(Informations_Of_Driver Driver[5]);

//Main Menu
int Main_Menu();

int main()
{
	int i, j;
	// Stored Data For The Program
	for (i = 0; i < 3; i++) {
		if (i == 0) {
			Driver[i].License_Number_Of_Driver = 10121970;
			Driver[i].Name_Of_Driver = "Driver1";
			Driver[i].Birthdate_Of_Driver = "1 / 1 / 2002";
		}
		else if (i == 1) {
			Driver[i].License_Number_Of_Driver = 12153010;
			Driver[i].Name_Of_Driver = "Driver2";
			Driver[i].Birthdate_Of_Driver = "19 / 3 / 2002";
		}
		else if (i == 2) {
			Driver[i].License_Number_Of_Driver = 20487981;
			Driver[i].Name_Of_Driver = "Driver3";
			Driver[i].Birthdate_Of_Driver = "15 / 5 / 2001";
		}
		for (j = 0; j < 3; j++) {
			if (i == 0 && j == 1) {
				continue;
			}
			else if (i == 1 && j == 2) {
				continue;
			}
			else if (i == 1 && j == 0) {
				Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car = 2020;
				Driver[i].Cars_Of_Driver[j].Model_Of_Car = "BMW";
				Driver[i].Cars_Of_Driver[j].Production_Year_Of_Car = 2010;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car = 500;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Street_Of_Fines_Name = "Sheraton";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Date_Of_Fines = "8 / 3 / 2020";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Status_Of_Fines = "Unpaid";
			}
			else if (i == 2 && j == 0) {
				Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car = 8459;
				Driver[i].Cars_Of_Driver[j].Model_Of_Car = "Jeep";
				Driver[i].Cars_Of_Driver[j].Production_Year_Of_Car = 2018;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car = 2000;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Street_Of_Fines_Name = "Ramsis";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Date_Of_Fines = "14 / 4 / 2019";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Status_Of_Fines = "Unpaid";
			}
			else if (i == 2 && j == 1) {
				Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car = 2371;
				Driver[i].Cars_Of_Driver[j].Model_Of_Car = "Honda";
				Driver[i].Cars_Of_Driver[j].Production_Year_Of_Car = 2012;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car = 2500;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Street_Of_Fines_Name = "Gesr El Suez";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Date_Of_Fines = "21 / 3 / 2019";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Status_Of_Fines = "Unpaid";
			}
			else if (i == 2 && j == 2) {
				Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car = 1414;
				Driver[i].Cars_Of_Driver[j].Model_Of_Car = "Marcedes";
				Driver[i].Cars_Of_Driver[j].Production_Year_Of_Car = 2018;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car = 3500;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Street_Of_Fines_Name = "El Nozha";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Date_Of_Fines = "22 / 11 / 2019";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Status_Of_Fines = "Unpaid";
			}
			else if (i == 1 && j == 1) {
				Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car = 6565;
				Driver[i].Cars_Of_Driver[j].Model_Of_Car = "Hyundai";
				Driver[i].Cars_Of_Driver[j].Production_Year_Of_Car = 2007;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car = 1500;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Street_Of_Fines_Name = "Abasya";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Date_Of_Fines = "3 / 2 / 2018";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Status_Of_Fines = "Unpaid";
			}
			else if (i == 0 && j == 0) {
				Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car = 1010;
				Driver[i].Cars_Of_Driver[j].Model_Of_Car = "Audi";
				Driver[i].Cars_Of_Driver[j].Production_Year_Of_Car = 2015;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car = 1000;
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Street_Of_Fines_Name = "El Hegaz";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Date_Of_Fines = "1 / 6 / 2019";
				Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Status_Of_Fines = "Unpaid";
			}

		}
	}
	Main_Menu();
}

void Search_For_Specific_Car(Informations_Of_Driver Driver[])
{
	int PlateNumber, i, j;
	cout << "Enter The Plate Number \n";
	cin >> PlateNumber;
	if (PlateNumber != 1010 && PlateNumber != 2020 && PlateNumber != 1414 && PlateNumber != 8459 && PlateNumber != 2371 && PlateNumber != 6565) {
		cout << "We Don't Have This Plate Number \n \n";
		goto label;
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (PlateNumber == Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car) {
				cout << "Owner Name : " << Driver[i].Name_Of_Driver << "\n"
					<< "Model Of Car : " << Driver[i].Cars_Of_Driver[j].Model_Of_Car << "\n"
					<< "Production Year : " << Driver[i].Cars_Of_Driver[j].Production_Year_Of_Car << "\n"
					<< "Plate Number : " << Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car << "\n"
					<< "Recorded Fines On The Car : " << Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car << " EGP \n \n";
			}
		}
	}
label: Main_Menu();
}

void Total_Fines_On_Driver(Informations_Of_Driver Driver[])
{
	float  FinesOnDriver = 0;
	int i, j;
	string NameOfDriver;
	cout << "What is the name of the driver? \n";
	cin >> NameOfDriver;
	if (NameOfDriver != "Driver1" && NameOfDriver != "Driver2" && NameOfDriver != "Driver3") {
		cout << "We Don't Have This Driver's Name \n \n";
		goto label;
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (NameOfDriver == Driver[i].Name_Of_Driver) {
				if (i == 1 && j == 2) {
					continue;
				}
				else if (i == 2 && j == 3) {
					continue;
				}
				FinesOnDriver += Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car;
			}
		}
	}
	cout << "Total Fines On This Driver Are : " << FinesOnDriver << " EGP\n \n";
label: Main_Menu();
}

void Pay_Fines_For_Specific_Car(Informations_Of_Driver Driver[])
{
	int PlateNumber, i, j, Choice;
	cout << "Enter Plate Number Of The Car \n";
	cin >> PlateNumber;
	if (PlateNumber != 1010 && PlateNumber != 2020 && PlateNumber != 1414 && PlateNumber != 8459 && PlateNumber != 2371 && PlateNumber != 6565) {
		cout << "We Don't Have This Plate Number \n \n";
		goto label;
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == 0 && j == 1) {
				continue;
			}
			else if (i == 1 && j == 2) {
				continue;
			}
			if (PlateNumber == Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car) {
				cout << "Total Fines Of The Car Are " << Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car << " EGP"
					<< "\n" << "1) Pay    2) Don't Pay \n";
				cin >> Choice;
				if (Choice == 1) {
					Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car = 0;
					cout << "Total Fines Of The Car Now Are " << Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car << " EGP\n \n";
				}
				else if (Choice == 2) {
					cout << "\n";
					goto label;
				}
				else {
					cout << "We Don't Have This In Our Choices \n \n";
					goto label;
				}
			}
		}
	}
label:	Main_Menu();
}

void Add_Fines_On_Specific_Car(Informations_Of_Driver Driver[5])
{
	int PlateNumber, SpeedOfCar, Difference, Fine, i, j;
	cout << "Enter The Plate Number \n";
	cin >> PlateNumber;
	if (PlateNumber != 1010 && PlateNumber != 2020 && PlateNumber != 1414 && PlateNumber != 8459 && PlateNumber != 2371 && PlateNumber != 6565) {
		cout << "We Don't Have This Plate Number \n \n";
		goto label;
	}
	cout << "Enter The Speed Of The Car \n";
	cin >> SpeedOfCar;
	if (SpeedOfCar > 80) {
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (PlateNumber == Driver[i].Cars_Of_Driver[j].Plate_Number_Of_Car) {
					Difference = SpeedOfCar - 80;
					Fine = Difference * 2;
					cout << "The Fine That Will Be Added Is " << Fine << " EGP\n";
					Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car += Fine;
					cout << "The Total Fines On This Car Are "
						<< Driver[i].Cars_Of_Driver[j].Recorded_Fines[j].Value_Of_The_Fines_On_Car << " EGP\n";
				}
			}
		}
	}
	else
	{
		cout << "No Fines Will Be Added \n";
	}
	cout << "\n";
label:	Main_Menu();
}

int Main_Menu()
{
	int Choice;
	cout << "How Can I help You? \n"
		<< "1) Search For Car   2) Unpaid Fines On The Driver   3) Pay Fines   4) Add Fines   5) Exit   \n";
	cout << "Enter Your Choice Number \n";
	cin >> Choice;
	switch (Choice)
	{
	case 1:
		Search_For_Specific_Car(Driver);
		break;
	case 2:
		Total_Fines_On_Driver(Driver);
		break;
	case 3:
		Pay_Fines_For_Specific_Car(Driver);
		break;
	case 4:
		Add_Fines_On_Specific_Car(Driver);
		break;
	case 5:
		return 0;
	default:
		cout << "This isn't In Our Choices \n \n";
		Main_Menu();
		break;
	}
}
