#include "ThiefClass.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

ThiefClass::ThiefClass()
{
}
void ThiefClass::ThiefClassOne()
{
	string TrashName = "John Wick";
	double TrashHP = 500;
	double ThiefHP = 750;

	bool EvasionFirstUse = true;
	bool Evasion = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || ThiefHP > 1)
	{
		if(TrashHP < 0 || ThiefHP < 0)
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
			cout << "Thiefs Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Thief ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Evasion" << endl;
			cout << "2. Double Strike" << endl;
			cout << "3. Swift Strike" << endl;
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
				if(EvasionFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					Evasion = true;
					EvasionFirstUse = false;
					cout << "Thief ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					if(Evasion == true)
					{
						cout << "Evasion Active" << endl;
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
					Evasion = true;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					if(Evasion == true)
					{
						cout << "Evasion" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Evasion is On Cool Down Please Try Again" << endl;
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
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Evasion == true)
					{
						cout << "Evasion" << endl;
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
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Evasion == true)
					{
						cout << "Evasion Active" << endl;
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
					cout << "Double Strike is On Cooldown" << endl;
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

				cout << "Thief ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(Evasion == true)
				{
					cout << "Evasion Active" << endl;
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
			if(Evasion == true)
			{
				double TempHP = .5 * RandAttackDMG;
				double TempHP2 = RandAttackDMG - TempHP;
				ThiefHP = ThiefHP - TempHP2;
				cout << "Thief ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(Evasion == false)
			{
				ThiefHP = ThiefHP - RandAttackDMG;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
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
void ThiefClass::ThiefClassTwo()
{
	string TrashName = "John Wick";
	double TrashHP = 3000;
	double ThiefHP = 2250;

	bool EvasionFirstUse = true;
	bool Evasion = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || ThiefHP > 1)
	{
		if(TrashHP < 0 || ThiefHP < 0)
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
			cout << "Thiefs Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Thief ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Evasion" << endl;
			cout << "2. Double Strike" << endl;
			cout << "3. Swift Strike" << endl;
			cout << "Exit Game" << endl;
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
				if(EvasionFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					Evasion = true;
					EvasionFirstUse = false;
					cout << "Thief ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					if(Evasion == true)
					{
						cout << "Evasion Active" << endl;
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
					Evasion = true;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					if(Evasion == true)
					{
						cout << "Evasion" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Evasion is On Cool Down Please Try Again" << endl;
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
					RandAttackDMG = 600+(rand() % 900);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					ESSFirstUse = false;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Evasion == true)
					{
						cout << "Evasion" << endl;
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
					RandAttackDMG = 600+(rand() % 900);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Evasion == true)
					{
						cout << "Evasion Active" << endl;
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
					cout << "Double Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 300+(rand() % 600);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Thief ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(Evasion == true)
				{
					cout << "Evasion Active" << endl;
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
			RandAttackDMG = 200+(rand() % 450);
			if(Evasion == true)
			{
				double TempHP = .5 * RandAttackDMG;
				double TempHP2 = RandAttackDMG - TempHP;
				ThiefHP = ThiefHP - TempHP2;
				cout << "Thief ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(Evasion == false)
			{
				ThiefHP = ThiefHP - RandAttackDMG;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
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
void ThiefClass::ThiefClassThree()
{
	string TrashName = "John Wick";
	double TrashHP = 9000;
	double ThiefHP = 6750;

	bool EvasionFirstUse = true;
	bool Evasion = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || ThiefHP > 1)
	{
		if(TrashHP < 0 || ThiefHP < 0)
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
			cout << "Thiefs Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Thief ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Evasion" << endl;
			cout << "2. Double Strike" << endl;
			cout << "3. Swift Strike" << endl;
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
				if(EvasionFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					Evasion = true;
					EvasionFirstUse = false;
					cout << "Thief ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					if(Evasion == true)
					{
						cout << "Evasion Active" << endl;
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
					Evasion = true;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					if(Evasion == true)
					{
						cout << "Evasion" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Evasion is On Cool Down Please Try Again" << endl;
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
					RandAttackDMG = 2000+(rand() % 2700);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					ESSFirstUse = false;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Evasion == true)
					{
						cout << "Evasion" << endl;
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
					RandAttackDMG = 2000+(rand() % 2700);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Evasion == true)
					{
						cout << "Evasion Active" << endl;
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
					cout << "Double Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 1000+(rand() % 800);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Thief ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(Evasion == true)
				{
					cout << "Evasion Active" << endl;
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
			RandAttackDMG = 900+(rand() % 1350);
			if(Evasion == true)
			{
				double TempHP = .5 * RandAttackDMG;
				double TempHP2 = RandAttackDMG - TempHP;
				ThiefHP = ThiefHP - TempHP2;
				cout << "Thief ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(Evasion == false)
			{
				ThiefHP = ThiefHP - RandAttackDMG;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
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
void ThiefClass::ThiefClassFour()
{
	string TrashName = "John Wick";
	double TrashHP = 27000;
	double ThiefHP = 20250;

	bool EvasionFirstUse = true;
	bool Evasion = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || ThiefHP > 1)
	{
		if(TrashHP < 0 || ThiefHP < 0)
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
			cout << "Thiefs Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Thief ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Evasion" << endl;
			cout << "2. Double Strike" << endl;
			cout << "3. Swift Strike" << endl;
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
				if(EvasionFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					Evasion = true;
					EvasionFirstUse = false;
					cout << "Thief ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					if(Evasion == true)
					{
						cout << "Evasion Active" << endl;
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
					Evasion = true;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					if(Evasion == true)
					{
						cout << "Evasion" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Evasion is On Cool Down Please Try Again" << endl;
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
					RandAttackDMG = 4000+(rand() % 8100);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					ESSFirstUse = false;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Evasion == true)
					{
						cout << "Evasion" << endl;
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
					RandAttackDMG = 4000+(rand() % 8100);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Thief ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Evasion == true)
					{
						cout << "Evasion Active" << endl;
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
					cout << "Double Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 3000+(rand() % 5400);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Thief ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(Evasion == true)
				{
					cout << "Evasion Active" << endl;
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
			RandAttackDMG = 2000+(rand() % 4050);
			if(Evasion == true)
			{
				double TempHP = .5 * RandAttackDMG;
				double TempHP2 = RandAttackDMG - TempHP;
				ThiefHP = ThiefHP - TempHP2;
				cout << "Thief ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(Evasion == false)
			{
				ThiefHP = ThiefHP - RandAttackDMG;
				cout << "Knight ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << ThiefHP <<"-----------------------------  " << TrashHP << endl;
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