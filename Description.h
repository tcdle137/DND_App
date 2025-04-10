#pragma once

class CharacterDescription
{
private:
	string name;
	string gender;
	string age;
	string height;
	string weight;
	string size;
	string hair;
	string eye;
	string skin;
	string faith;
	string alignment;
public:
	CharacterDescription()
	{
		name = "";
		gender = "";
		height = "";
		size = "";
		hair = "";
		eye = "";
		skin = "";
		age = "";
		weight = "";
		faith = "";
		alignment = "";
	}
	CharacterDescription(string in[11])
	{
		name = in[0];
		gender = in[1];
		age = in[2];
		height = in[3];
		weight = in[4];
		size = in[5];
		hair = in[6];
		eye = in[7];
		skin = in[8];
		faith = in[9];
		alignment = in[10];
	}

	// SET FUNCTIONS
	void setName(string in)
	{
		name = in;
	}
	void setGender(string in)
	{
		gender = in;
	}
	void setHeight(string in)
	{
		height = in;
	}
	void setSize(string in)
	{
		size = in;
	}
	void setHair(string in)
	{
		hair = in;
	}
	void setEye(string in)
	{
		eye = in;
	}
	void setSkin(string in)
	{
		skin = in;
	}
	void setFaith(string in)
	{
		faith = in;
	}
	void setAlignment(string in)
	{
		alignment = in;
	}
	void setAge(string in)
	{
		age = in;
	}
	void setWeight(string in)
	{
		weight = in;
	}

	// GET FUNCTIONS
	string getName()
	{
		return name;
	}
	string getGender()
	{
		return gender;
	}
	string getHeight()
	{
		return height;
	}
	string getSize()
	{
		return size;
	}
	string getHair()
	{
		return hair;
	}
	string getEye()
	{
		return eye;
	}
	string getSkin()
	{
		return skin;
	}
	string getFaith()
	{
		return faith;
	}
	string getAlignment()
	{
		return alignment;
	}
	string getAge()
	{
		return age;
	}
	string getWeight()
	{
		return weight;
	}
};