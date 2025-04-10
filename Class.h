#pragma once

class Class
{
private:
	int Cabilities[6];

	int Cproficiency;
	int CarmorClass;
	int Cinitiative;
public:
	// DEFAULT CONSTRUCTOR WITH NO INPUT
	Class()
	{
		for (int i = 0; i < 6; i++)
		{
			Cabilities[i] = -1;
		}
		Cproficiency = -1;
		CarmorClass = -1;
		Cinitiative = -1;
	}
	// SPECIFIC CONSTRUCTOR TO SELECT RACE
	Class(int classIn)
	{

	}
};

class Barbarian : public Class
{

};
class Bard : public Class
{

};
class Cleric : public Class
{

};
class Druid : public Class
{

};
class Fighter : public Class
{

};
class Monk : public Class
{

};
class Paladin : public Class
{

};
class Ranger : public Class
{

};
class Rogue : public Class
{

};
class Sorceror : public Class
{

};
class Warlock : public Class
{

};
class Wizard : public Class
{

};