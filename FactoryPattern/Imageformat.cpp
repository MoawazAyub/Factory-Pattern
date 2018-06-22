# include "Imageformat.h"
# include"GIF.h"
# include"Jpeg.h"
# include"Png.h"

Imageformat::Imageformat()
{

}

Imageformat::Imageformat(string a,string b)
{
	name = a;
	path = b;

}

void Imageformat::Save()
{

}

string Imageformat::GetName()
{
	return name;

}

string Imageformat::GetPath()
{
	return path;    

}

void Imageformat::Setname(string s)
{
	name = s;

}

Imageformat * Imageformat::createimage(string s)
{
	bool k1 = false;
	string str2;
	for(int i = 0 ; i < s.size() ; i++)
	{
		if(s[i] == '.')
		{
			k1 = true;
			continue;
		
		}
		
		if(k1 == true)
		{
			str2 = str2+s[i];
		
		}

	}

	if(str2 == "GIF" || str2 == "gif")
	{
		return new GIF[1];
	}

	else if(str2 == "jpeg" || str2 == "JPEG")
	{
		return new Jpeg[1];
	}

	else if(str2 == "PNG" || str2 == "png")
	{
		return new PNG[1];
	
	}
	
	
}