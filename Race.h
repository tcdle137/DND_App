#pragma once

class Race
{
private:
	int Rabilities[6];

	int Rproficiency;
	int RarmorClass;
	int Rinitiative;

public:
	// DEFAULT CONSTRUCTOR WITH NO INPUT
	Race() 
	{
		for (int i = 0; i < 6; i++)
		{
			Rabilities[i] = -1;
		}
		Rproficiency = -1;
		RarmorClass = -1;
		Rinitiative = -1;
	}
	// SPECIFIC CONSTRUCTOR TO SELECT RACE
	Race(int raceIn)
	{
		
	}

	// RACE BONUSES
	int strengthRaceBonus()
	{

	}
	int dexterityRaceBonus()
	{

	}
	int constitutionRaceBonus()
	{

	}
	int intelligenceRaceBonus()
	{

	}
	int wisdomRaceBonus()
	{

	}
	int charismaRaceBonus()
	{

	}
	int proficiencyRaceBonus()
	{

	}
	int armorClassRaceBonus()
	{

	}
	int initiativeRaceBonus()
	{

	}
};

class Dwarf : public Race
{

};
class Elf : public Race
{

};
class Halfling : public Race
{

};
class Human : public Race
{

};
class Dragonborn : public Race
{

};
class Goliath : public Race
{

};
class Orc : public Race
{

};
class Tiefling : public Race
{

};
