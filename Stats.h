#pragma once

class Stats
{
private:
	int abilities[6];

	int level;
	int proficiency;
	int armorClass;
	int initiative;

public:
	// CONSTRUCTOR
	Stats()
	{
		for (int i = 0; i < 6; i++)
		{
			abilities[i] = -1;
		}
		level = -1;
		proficiency = -1;
		armorClass = -1;
		initiative = -1;
	}
	Stats(int in[6], int levelIn)
	{
		for (int i = 0; i < 6; i++)
		{
			abilities[i] = in[i];
		}

		level = levelIn;
		proficiency = 2 + ((level - 1) / 4);
		armorClass = 10 + getDexterityModifier();
		initiative = getDexterityModifier();
	}

	// ---------------- GET FUNCTIONS ----------------
	// RAW ABILITIY NUMBERS 0-20
	int getStrengthRaw()
	{
		return abilities[0];
	}
	int getDexterityRaw()
	{
		return abilities[1];
	}
	int getConstitutionRaw()
	{
		return abilities[2];
	}
	int getIntelligenceRaw()
	{
		return abilities[3];
	}
	int getWisdomRaw()
	{
		return abilities[4];
	}
	int getCharismaRaw()
	{
		return abilities[5];
	}

	// ABILITY MODIFIERS
	int getStrengthModifier()
	{
		return (abilities[0] -10)/2;
	}
	int getDexterityModifier()
	{
		return (abilities[1] -10)/2;
	}
	int getConstitutionModifier()
	{
		return (abilities[2] -10)/2;
	}
	int getIntelligenceModifier()
	{
		return (abilities[3] -10)/2;
	}
	int getWisdomModifier()
	{
		return (abilities[4] -10)/2;
	}
	int getCharismaModifier()
	{
		return (abilities[5] -10)/2;
	}

	// PROFICIENCY MODIFIER
	int getProficiencyModifier()
	{
		return proficiency;
	}
};