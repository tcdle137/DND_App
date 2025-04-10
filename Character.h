#pragma once
#include "Stats.h"
#include "Description.h"
#include "Race.h"
#include "Class.h"
#include <iostream>
using namespace std;

class Character
{
private:
	Stats S;
	CharacterDescription D;
	Race R;
	Class C;
public:
	Character()
	{
		
	}
	Character()
	{
		int abilityStats[6];
		string description[11];
		int levelIn, RIn, CIn;
		initializeCharacter(abilityStats, description, levelIn, RIn, CIn);
		Stats SNew(abilityStats, levelIn);
		CharacterDescription DNew(description);
		Race RNew(RIn);
		Class CNew(CIn);
		
	}

	void initializeCharacter(int (&abliityStats)[6], string (&description)[11], int &levelIn, int &RIn, int &CIn)
	{
		// INITIALIZES DESCRIPTION
		cout << "Please input your character's Name : ";
		cin >> description[0];
		cout << "\nPlease input your character's Gender : ";
		cin >> description[1];
		cout << "\nPlease input your character's Age : ";
		cin >> description[2];
		cout << "\nPlease input your character's Height : ";
		cin >> description[3];
		cout << "\nPlease input your character's Weight : ";
		cin >> description[4];
		cout << "\nPlease input your character's Size (DND sizes) : ";
		cin >> description[5];
		cout << "\nPlease input your character's Hair Color : ";
		cin >> description[6];
		cout << "\nPlease input your character's Eye Color : ";
		cin >> description[7];
		cout << "\nPlease input your character's Skin Color : ";
		cin >> description[8];
		cout << "\nPlease input your character's Faith : ";
		cin >> description[9];
		cout << "\nPlease input your character's Alignment (Lawful Good, Chaotic Evil, etc.) : ";
		cin >> description[10];
		system("CLS");

		// INITIALIZES CHARACTER ABILITY STATS
		cout << "Please input your character's Strength Ability Score (1-20) : ";
		cin >> abliityStats[0];
		cout << "\nPlease input your character's Dexterity Ability Score (1-20) : ";
		cin >> abliityStats[1];
		cout << "\nPlease input your character's Constitution Ability Score (1-20) : ";
		cin >> abliityStats[2];
		cout << "\nPlease input your character's Intelligence Ability Score (1-20) : ";
		cin >> abliityStats[3];
		cout << "\nPlease input your character's Wisdom Ability Score (1-20) : ";
		cin >> abliityStats[4];
		cout << "\nPlease input your character's Charisma Ability Score (1-20) : ";
		cin >> abliityStats[5];
		system("CLS");

		// INITIALIZES CHARACTER RACE
		cout << "Please input your character's Race from the list below : "
			<< "\n1. Dwarf"
			<< "\n2. Elf"
			<< "\n3. Halfling"
			<< "\n4. Human"
			<< "\n5. Dragonborn"
			<< "\n6. Gnome"
			<< "\n7. Goliath"
			<< "\n8. Orc"
			<< "\n9. Tiefling"
			<< "\nPlease input the number of the Race that you have chosen : ";
		cin >> RIn;
		if ((RIn < 1 || RIn > 9) || !cin)
		{
			while (RIn < 1 || RIn > 9 || !cin)
			{
				cin.clear();
				cout << "\nPlease input a number between 1 and 4 : ";
				cin >> RIn;
			}
		}
		system("CLS");

		// INITIALIZES CHARACTER CLASS
		cout << "Please input your character's Class from the list below : "
			<< "\n1.  Barbarian"
			<< "\n2.  Bard"
			<< "\n3.  Cleric"
			<< "\n4.  Druid"
			<< "\n5.  Fighter"
			<< "\n6.  Monk"
			<< "\n7.  Paladin"
			<< "\n8.  Ranger"
			<< "\n9.  Rogue"
			<< "\n10. Sorcerer"
			<< "\n11. Warlock"
			<< "\n12. Wizard"
			<< "\nPlease input the number of the Class that you have chosen : ";
		cin >> RIn;
		if ((RIn < 1 || RIn > 12) || !cin)
		{
			while (RIn < 1 || RIn > 12 || !cin)
			{
				cin.clear();
				cout << "\nPlease input a number between 1 and 12 : ";
				cin >> RIn;
			}
		}
		system("CLS");

		// INITIALIZES CHARACTER LEVEL
	}
};