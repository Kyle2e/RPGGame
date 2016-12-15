#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <Lmcons.h>
#include <sstream>
#include<limits>

#include "KnightClass.h"
#include "ThiefClass.h"
#include "MageClass.h"
#include "DragonClass.h"

using namespace std;

void FileReader(string);
void Start();

KnightClass BattleKC;
ThiefClass  BattleTC;
MageClass BattleMC;
DragonClass BattleDC;

int main()
{
	string FileID = "Knight1.txt";
	FileReader(FileID);
	Start();
}
void Start()
{
	string FileID = "Txt1.txt";
	system("cls");
	
	cout << "Welcome Outsider Please Pick A Class." <<endl;
	cout << "" << endl;
	cout << "1. Knight" << endl;
	cout << "2. Thief" << endl;
	cout << "3. Mage" << endl;
	cout << "4. Dragon" << endl;
	cout << "" << endl;
	int UserChoice;
	cin >> UserChoice;
	if(!cin)
	{
		cin.clear();
		cin.ignore();
		cout << "Please enter a number.";
		cin >> UserChoice;
	}
	system("cls");
	switch(UserChoice)
	{
	case 1:
		FileID = "Knight2.txt";
		FileReader(FileID);
		BattleKC.KnightClassOne();
		system("cls");

		FileID = "Knight3.txt";
		FileReader(FileID);
		BattleKC.KnightClassTwo();
		system("cls");

		FileID = "Knight4.txt";
		FileReader(FileID);
		BattleKC.KnightClassThree();
		system("cls");

		FileID = "Knight1.txt";
		FileReader(FileID);
		BattleKC.KnightClassFour();
		system("cls");

		break;
	case 2:
		FileID = "Txt1.txt";
		BattleTC.ThiefClassOne();
		FileReader(FileID);
		system("cls");

		FileID = "Txt1.txt";
		BattleTC.ThiefClassTwo();
		FileReader(FileID);
		system("cls");

		FileID = "Txt1.txt";
		BattleTC.ThiefClassThree();
		FileReader(FileID);
		system("cls");

		FileID = "Txt1.txt";
		BattleTC.ThiefClassFour();
		FileReader(FileID);
		system("cls");

		break;
	case 3:
		FileID = "Txt1.txt";
		BattleMC.MageClassOne();
		FileReader(FileID);
		system("cls");

		FileID = "Txt1.txt";
		BattleMC.MageClassTwo();
		FileReader(FileID);
		system("cls");

		FileID = "Txt1.txt";
		BattleMC.MageClassThree();
		FileReader(FileID);
		system("cls");

		FileID = "Txt1.txt";
		BattleMC.MageClassFour();
		FileReader(FileID);
		system("cls");

		break;
	case 4:
		FileID = "Txt1.txt";
		BattleDC.DragonClassOne();
		FileReader(FileID);
		system("cls");

		FileID = "Txt1.txt";
		BattleDC.DragonClassTwo();
		FileReader(FileID);
		system("cls");

		FileID = "Txt1.txt";
		BattleDC.DragonClassThree();
		FileReader(FileID);
		system("cls");

		FileID = "Txt1.txt";
		BattleDC.DragonClassFour();
		FileReader(FileID);
		system("cls");

		break;
	}
}
//File Reading Function 
void FileReader(string FileID)
{
	char username[UNLEN+1];
	DWORD username_len = UNLEN+1;
	GetUserName(username, &username_len);

	stringstream ss;
	string StringUserName;

	ss << username;
	ss >> StringUserName;

	string FileName = "C:/Users/"+StringUserName+"/Desktop/"+FileID;
	ifstream File(FileName);
	string FileContent;

	while (getline(File, FileContent))
    {
        cout << FileContent;
    }
	cout << "" << endl;
	system("Pause");
}
