# ifndef PNG_H
# define PNG_H
# include <iostream>

#include"Imageformat.h"|

using namespace std;

class PNG:public Imageformat
{
	
public:
	PNG();
	virtual void Save();
};

#endif