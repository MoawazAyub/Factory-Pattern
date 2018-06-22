#ifndef IMAGEFORMAT_H
#define IMAGEFORMAT_H
# include <string>
class GIF;
class Jpeg;
class PNG;

using namespace std;

class Imageformat
{
	string name;
	string path;

public:
	Imageformat();
	Imageformat(string,string);
	void Setname(string);
	string GetName();
	string GetPath();
	virtual Imageformat* createimage(string);
	virtual void Save();

};

#endif