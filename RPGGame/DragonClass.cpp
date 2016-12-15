#include "DragonClass.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

DragonClass::DragonClass()
{
}
void DragonClass::DragonClassOne()
{
	string TrashName = "John Wick";
	double TrashHP = 500;
	double DragonHP = 1000;

	bool ShieldWallFirstUse = true;
	bool ShieldWallActive = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || DragonHP > 1)
	{
		if(TrashHP < 0 || DragonHP < 0)
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
			cout << "Dragons Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Dragon ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Harden Skin" << endl;
			cout << "2. Flaming Breath" << endl;
			cout << "3. Claw Lash" << endl;
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
					cout << "Dragon ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin" << endl;
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
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Harden Skin is On Cool Down Please Try Again" << endl;
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
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					cout << "Flaming Breath is On Cooldown" << endl;
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

				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(ShieldWallActive == true)
				{
					cout << "Harden Skin Active" << endl;
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
				DragonHP = DragonHP - TempHP2;
				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
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
				DragonHP = DragonHP - RandAttackDMG;
				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
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
void DragonClass::DragonClassThree()
{
		string TrashName = "John Wick";
	double TrashHP = 4500;
	double DragonHP = 9000;

	bool ShieldWallFirstUse = true;
	bool ShieldWallActive = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || DragonHP > 1)
	{
		if(TrashHP < 0 || DragonHP < 0)
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
			cout << "Dragons Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Dragon ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Harden Skin" << endl;
			cout << "2. Flaming Breath" << endl;
			cout << "3. Claw Lash" << endl;
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
					cout << "Dragon ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Harden Skin is On Cool Down Please Try Again" << endl;
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
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					cout << "Flaming Breath is On Cooldown" << endl;
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

				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(ShieldWallActive == true)
				{
					cout << "Harden Skin Active" << endl;
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
				DragonHP = DragonHP - TempHP2;
				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
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
				DragonHP = DragonHP - RandAttackDMG;
				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
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
void DragonClass::DragonClassTwo()
{
	string TrashName = "John Wick";
	double TrashHP = 1500;
	double DragonHP = 3000;

	bool ShieldWallFirstUse = true;
	bool ShieldWallActive = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || DragonHP > 1)
	{
		if(TrashHP < 0 || DragonHP < 0)
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
			cout << "Dragons Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Dragon ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Harden Skin" << endl;
			cout << "2. Flaming Breath" << endl;
			cout << "3. Claw Lash" << endl;
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
				if(ShieldWallFirstUse == true)
				{
					system("cls");
					CooldownRelease = TurnCounter + 5;
					ShieldWallActive = true;
					ShieldWallFirstUse = false;
					cout << "Dragon ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Harden Skin is On Cool Down Please Try Again" << endl;
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
					RandAttackDMG = 300+(rand() % 450);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					ESSFirstUse = false;
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					RandAttackDMG = 300+(rand() % 450);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					cout << "Flaming Breath is On Cooldown" << endl;
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

				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(ShieldWallActive == true)
				{
					cout << "Harden Skin Active" << endl;
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
				DragonHP = DragonHP - TempHP2;
				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
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
				DragonHP = DragonHP - RandAttackDMG;
				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
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
void DragonClass::DragonClassFour()
{
	string TrashName = "John Wick";
	double TrashHP = 27000;
	double DragonHP = 20250;

	bool ShieldWallFirstUse = true;
	bool ShieldWallActive = false;

	bool ESSFirstUse = true;
	int ESSCooldownRelease;

	int TurnCounter = 1;
	int CooldownRelease;
	int Turn = 1;
	int AbilityChoice;
	
	double RandAttackDMG;

	while(TrashHP > 1 || DragonHP > 1)
	{
		if(TrashHP < 0 || DragonHP < 0)
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
			cout << "Dragons Turn" << endl;
			cout << "This is Turn " << TurnCounter << endl;
			cout << "" << endl;
			cout << "Dragon ------------------------------" << TrashName << endl;
			cout << "" << endl;
			cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
			cout << "" << endl;
			cout << "1. Harden Skin" << endl;
			cout << "2. Flaming Breath" << endl;
			cout << "3. Claw Lash" << endl;
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
					cout << "Dragon ------------------------------" << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
					}
					TurnCounter++;
					Turn = 2;
					system("Pause");
					system("cls");
				}
				else if(TurnCounter < CooldownRelease)
				{
					system("cls");
					cout << "Harden Skin is On Cool Down Please Try Again" << endl;
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
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					RandAttackDMG = 7000+(rand() % 8100);

					TrashHP = TrashHP - RandAttackDMG;

					ESSCooldownRelease = TurnCounter + 4;
					cout << "Dragon ------------------------------ " << TrashName << endl;
					cout << "" << endl;
					cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
					cout << "" << endl;
					cout << "Damage Done: " << RandAttackDMG << endl;
					cout << "" << endl;
					if(ShieldWallActive == true)
					{
						cout << "Harden Skin Active" << endl;
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
					cout << "Flaming Breath is On Cooldown" << endl;
					system("Pause");
					system("cls");
				}
			}
			if(AbilityChoice == 3)
			{
				system("cls");
				srand(time(NULL));
				RandAttackDMG = 4000+(rand() % 5400);

				TrashHP = TrashHP - RandAttackDMG;

				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
				cout << "" << endl;
				cout << "Damage Done: " << RandAttackDMG << endl;
				cout << "" << endl;
				if(ShieldWallActive == true)
				{
					cout << "Harden Skin Active" << endl;
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
			RandAttackDMG = 2000+(rand() % 4000);
			if(ShieldWallActive == true)
			{
				double TempHP = .3 * RandAttackDMG;
				double TempHP2 = RandAttackDMG - TempHP;
				DragonHP = DragonHP - TempHP2;
				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
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
				DragonHP = DragonHP - RandAttackDMG;
				cout << "Dragon ------------------------------ " << TrashName << endl;
				cout << "" << endl;
				cout << DragonHP <<"-----------------------------  " << TrashHP << endl;
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