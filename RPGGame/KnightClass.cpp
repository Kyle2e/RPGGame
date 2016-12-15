#include "KnightClass.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

KnightClass::KnightClass()
{
}
void KnightClass::KnightClassOne()
{
	string TrashName = "John Wick";
	double TrashHP = 500;
	double KnightHP = 1000;

	bool ShieldWallFirstUse = true;
	bool ShieldWallActive = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || KnightHP > 1)
	{
		if(TrashHP < 0 || KnightHP < 0)
		{
			cout << "Congrats" << endl;
			system("pause");
			system("cls");
			break;
		}
		system("cls");
		if(Turn == 1)
		{
			cout << "Fight !!!!!! Your are in combat with " << TrashName << endl;
			cout << "Knights Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Knight ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Shield Wall" << endl;
			cout << "2. Electric Sword Strike" << endl;
			cout << "3. Sword Lash" << endl;
			cout << "4. Exit Game" << endl;
			cin >> AbilityChoice;
			if(!cin)
			{
				cin.clear();
				cin.ignore();
				cout << "Please enter a number.";
				cin >> AbilityChoice;
			}
			if(AbilityChoice == 1)
			{
				if(ShieldWallFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					ShieldWallActive = true;
					ShieldWallFirstUse = false;
					cout << "Knight ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter >= CooldownRelease)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					ShieldWallActive = true;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Shield Wall is On Cool Down Please Try Again" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 2)
			{
				if(ESSFirstUse == true)
				{
					system("cls");
					srand(time(NULL));
					RandAttackDMG = 150+(rand() % 200);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					ESSFirstUse = false;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					RandAttackDMG = 0;
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter >= ESSCooldownRelease)
				{
					system("cls");
					srand(time(NULL));
					RandAttackDMG = 150+(rand() % 200);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					RandAttackDMG = 0;
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < ESSCooldownRelease)
				{
					system("cls");
					cout << "Electric Sword Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 75+(rand() % 100);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(ShieldWallActive == true)
				{
					cout << "Shield Wall Active" << endl;
				}
				RandAttackDMG = 0;
				TurnCounter++;
				Turn = 2;
				system("Pause");
				system("cls");
			}
			if(AbilityChoice == 4)
			{
				exit(0);
			}
		}
		if(Turn == 2)
		{
			srand(time(NULL));
			RandAttackDMG = 150+(rand() % 200);
			if(ShieldWallActive == true)
			{
				double TempHP = .3 * RandAttackDMG;
				double TempHP2 = RandAttackDMG - TempHP;
				KnightHP = KnightHP - TempHP2;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(ShieldWallActive == false)
			{
				KnightHP = KnightHP - RandAttackDMG;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
		}
	}
}
void KnightClass::KnightClassThree()
{
	string TrashName = "John Wick";
	double TrashHP = 4500;
	double KnightHP = 9000;

	bool ShieldWallFirstUse = true;
	bool ShieldWallActive = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || KnightHP > 1)
	{
		if(TrashHP < 0 || KnightHP < 0)
		{
			cout << "Congrats" << endl;
			system("pause");
			system("cls");
			break;
		}
		system("cls");
		if(Turn == 1)
		{
			cout << "Fight !!!!!! Your are in combat with " << TrashName << endl;
			cout << "Knights Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Knight ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Shield Wall" << endl;
			cout << "2. Electric Sword Strike" << endl;
			cout << "3. Sword Lash" << endl;
			cout << "4. Exit Game" << endl;
			cin >> AbilityChoice;
			if(!cin)
			{
				cin.clear();
				cin.ignore();
				cout << "Please enter a number.";
				cin >> AbilityChoice;
			}
			if(AbilityChoice == 1)
			{
				if(ShieldWallFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					ShieldWallActive = true;
					ShieldWallFirstUse = false;
					cout << "Knight ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter >= CooldownRelease)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					ShieldWallActive = true;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Shield Wall is On Cool Down Please Try Again" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 2)
			{
				if(ESSFirstUse == true)
				{
					system("cls");
					srand(time(NULL));
					RandAttackDMG = 675+(rand() % 1350);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					ESSFirstUse = false;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					RandAttackDMG = 0;
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter >= ESSCooldownRelease)
				{
					system("cls");
					srand(time(NULL));
					RandAttackDMG = 675+(rand() % 1350);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					RandAttackDMG = 0;
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < ESSCooldownRelease)
				{
					system("cls");
					cout << "Electric Sword Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 700+(rand() % 900);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(ShieldWallActive == true)
				{
					cout << "Shield Wall Active" << endl;
				}
				RandAttackDMG = 0;
				TurnCounter++;
				Turn = 2;
				system("Pause");
				system("cls");
			}
			if(AbilityChoice == 4)
			{
				exit(0);
			}
		}
		if(Turn == 2)
		{
			srand(time(NULL));
			RandAttackDMG = 1000+(rand() % 1800);
			if(ShieldWallActive == true)
			{
				double TempHP = .3 * RandAttackDMG;
				double TempHP2 = RandAttackDMG - TempHP;
				KnightHP = KnightHP - TempHP2;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(ShieldWallActive == false)
			{
				KnightHP = KnightHP - RandAttackDMG;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
		}
	}
}
void KnightClass::KnightClassFour()
{
	string TrashName = "John Wick";
	double TrashHP = 13500;
	double KnightHP = 27000;

	bool ShieldWallFirstUse = true;
	bool ShieldWallActive = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || KnightHP > 1)
	{
		if(TrashHP < 0 || KnightHP < 0)
		{
			cout << "Congrats" << endl;
			system("pause");
			system("cls");
			break;
		}
		system("cls");
		if(Turn == 1)
		{
			cout << "Fight !!!!!! Your are in combat with " << TrashName << endl;
			cout << "Knights Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Knight ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Shield Wall" << endl;
			cout << "2. Electric Sword Strike" << endl;
			cout << "3. Sword Lash" << endl;
			cout << "4. Exit Game" << endl;
			cin >> AbilityChoice;
			if(!cin)
			{
				cin.clear();
				cin.ignore();
				cout << "Please enter a number.";
				cin >> AbilityChoice;
			}
			if(AbilityChoice == 1)
			{
				if(ShieldWallFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					ShieldWallActive = true;
					ShieldWallFirstUse = false;
					cout << "Knight ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter >= CooldownRelease)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					ShieldWallActive = true;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Shield Wall is On Cool Down Please Try Again" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 2)
			{
				if(ESSFirstUse == true)
				{
					system("cls");
					srand(time(NULL));
					RandAttackDMG = 2000+(rand() % 4050);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					ESSFirstUse = false;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					RandAttackDMG = 0;
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter >= ESSCooldownRelease)
				{
					system("cls");
					srand(time(NULL));
					RandAttackDMG = 2000+(rand() % 4050);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					RandAttackDMG = 0;
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < ESSCooldownRelease)
				{
					system("cls");
					cout << "Electric Sword Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 2000+(rand() % 2700);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(ShieldWallActive == true)
				{
					cout << "Shield Wall Active" << endl;
				}
				RandAttackDMG = 0;
				TurnCounter++;
				Turn = 2;
				system("Pause");
				system("cls");
			}
			if(AbilityChoice == 4)
			{
				exit(0);
			}
		}
		if(Turn == 2)
		{
			srand(time(NULL));
			RandAttackDMG = 2500+(rand() % 5400);
			if(ShieldWallActive == true)
			{
				double TempHP = .3 * RandAttackDMG;
				double TempHP2 = RandAttackDMG - TempHP;
				KnightHP = KnightHP - TempHP2;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(ShieldWallActive == false)
			{
				KnightHP = KnightHP - RandAttackDMG;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
		}
	}
}
void KnightClass::KnightClassTwo()
{
	string TrashName = "John Wick";
	double TrashHP = 1500;
	double KnightHP = 3000;

	bool ShieldWallFirstUse = true;
	bool ShieldWallActive = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || KnightHP > 1)
	{
		if(TrashHP <= 0 || KnightHP < 0)
		{
			cout << "Congrats" << endl;
			system("pause");
			system("cls");
			break;
		}
		system("cls");
		if(Turn == 1)
		{
			cout << "Fight !!!!!! Your are in combat with " << TrashName << endl;
			cout << "Knights Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Knight ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Shield Wall" << endl;
			cout << "2. Electric Sword Strike" << endl;
			cout << "3. Sword Lash" << endl;
			cout << "4. Exit Game" << endl;
			cin >> AbilityChoice;
			if(!cin)
			{
				cin.clear();
				cin.ignore();
				cout << "Please enter a number.";
				cin >> AbilityChoice;
			}
			if(AbilityChoice == 1)
			{
				if(ShieldWallFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					ShieldWallActive = true;
					ShieldWallFirstUse = false;
					cout << "Knight ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter >= CooldownRelease)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					ShieldWallActive = true;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Shield Wall is On Cool Down Please Try Again" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 2)
			{
				if(ESSFirstUse == true)
				{
					system("cls");
					srand(time(NULL));
					RandAttackDMG = 400+(rand() % 450);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					ESSFirstUse = false;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					RandAttackDMG = 0;
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter >= ESSCooldownRelease)
				{
					system("cls");
					srand(time(NULL));
					RandAttackDMG = 400+(rand() % 450);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Knight ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Shield Wall Active" << endl;
					}
					RandAttackDMG = 0;
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < ESSCooldownRelease)
				{
					system("cls");
					cout << "Electric Sword Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 150+(rand() % 300);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(ShieldWallActive == true)
				{
					cout << "Shield Wall Active" << endl;
				}
				RandAttackDMG = 0;
				TurnCounter++;
				Turn = 2;
				system("Pause");
				system("cls");
			}
			if(AbilityChoice == 4)
			{
				exit(0);
			}
		}
		if(Turn == 2)
		{
			srand(time(NULL));
			RandAttackDMG = 300+(rand() % 600);
			if(ShieldWallActive == true)
			{
				double TempHP = .3 * RandAttackDMG;
				double TempHP2 = RandAttackDMG - TempHP;
				KnightHP = KnightHP - TempHP2;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(ShieldWallActive == false)
			{
				KnightHP = KnightHP - RandAttackDMG;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << KnightHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
		}
	}
}
