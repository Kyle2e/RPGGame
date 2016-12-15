#include "MageClass.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;


MageClass::MageClass()
{
}
void MageClass::MageClassOne()
{
	string TrashName = "John Wick";
	double TrashHP = 500;
	double MageHP = 750;

	bool FlashFirstUse = true;
	bool Flash = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || MageHP > 1)
	{
		if(TrashHP < 0 || MageHP < 0)
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
			cout << "Mages Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Mage ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << MageHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Flash" << endl;
			cout << "2. Pyro Strike" << endl;
			cout << "3. Flame Strike" << endl;
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
				if(FlashFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					Flash = true;
					FlashFirstUse = false;
					cout << "Mage ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					Flash = true;
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Flash is On Cool Down Please Try Again" << endl;
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
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					cout << "Pyro Strike is On Cooldown" << endl;
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

				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(Flash == true)
				{
					cout << "Flash Active" << endl;
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
			if(Flash == true)
			{
				RandAttackDMG = 0;
				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(Flash == false)
			{
				MageHP = MageHP - RandAttackDMG;
				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
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
void MageClass::MageClassThree()
{
	string TrashName = "John Wick";
	double TrashHP = 9000;
	double MageHP = 6750;

	bool FlashFirstUse = true;
	bool Flash = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || MageHP > 1)
	{
		if(TrashHP < 0 || MageHP < 0)
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
			cout << "Mages Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Mage ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << MageHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Flash" << endl;
			cout << "2. Pyro Strike" << endl;
			cout << "3. Flame Strike" << endl;
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
				if(FlashFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					Flash = true;
					FlashFirstUse = false;
					cout << "Mage ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					Flash = true;
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Flash is On Cool Down Please Try Again" << endl;
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
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					cout << "Pyro Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 1000+(rand() % 1800);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(Flash == true)
				{
					cout << "Flash Active" << endl;
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
			RandAttackDMG = 1000+(rand() % 1350);
			if(Flash == true)
			{
				RandAttackDMG = 0;
				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(Flash == false)
			{
				MageHP = MageHP - RandAttackDMG;
				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
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
void MageClass::MageClassTwo()
{
	string TrashName = "John Wick";
	double TrashHP = 3000;
	double MageHP = 2250;

	bool FlashFirstUse = true;
	bool Flash = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || MageHP > 1)
	{
		if(TrashHP < 0 || MageHP < 0)
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
			cout << "Mages Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Mage ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << MageHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Flash" << endl;
			cout << "2. Pyro Strike" << endl;
			cout << "3. Flame Strike" << endl;
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
				if(FlashFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					Flash = true;
					FlashFirstUse = false;
					cout << "Mage ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					Flash = true;
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Flash is On Cool Down Please Try Again" << endl;
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
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					cout << "Pyro Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 400+(rand() % 600);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(Flash == true)
				{
					cout << "Flash Active" << endl;
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
			RandAttackDMG = 300+(rand() % 450);
			if(Flash == true)
			{
				RandAttackDMG = 0;
				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(Flash == false)
			{
				MageHP = MageHP - RandAttackDMG;
				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
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
void MageClass::MageClassFour()
{
	string TrashName = "John Wick";
	double TrashHP = 27000;
	double MageHP = 20250;

	bool FlashFirstUse = true;
	bool Flash = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || MageHP > 1)
	{
		if(TrashHP < 0 || MageHP < 0)
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
			cout << "Mages Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Mage ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << MageHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Flash" << endl;
			cout << "2. Pyro Strike" << endl;
			cout << "3. Flame Strike" << endl;
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
				if(FlashFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					Flash = true;
					FlashFirstUse = false;
					cout << "Mage ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					Flash = true;
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Flash is On Cool Down Please Try Again" << endl;
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
					RandAttackDMG = 5000+(rand() % 8100);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					ESSFirstUse = false;
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					RandAttackDMG = 5000+(rand() % 8100);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Mage ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << MageHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(Flash == true)
					{
						cout << "Flash Active" << endl;
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
					cout << "Pyro Strike is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 2500+(rand() % 5400);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(Flash == true)
				{
					cout << "Flash Active" << endl;
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
			if(Flash == true)
			{
				RandAttackDMG = 0;
				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				RandAttackDMG = 0;
				Turn = 1;
				system("Pause");
				system("cls");
			}
			else if(Flash == false)
			{
				MageHP = MageHP - RandAttackDMG;
				cout << "Mage ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << MageHP <<"-----------------------------  " << TrashHP << endl;
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
		