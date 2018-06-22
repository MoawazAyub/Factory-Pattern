# ifndef GIF_H
# define GIF_H
# include<iostream>
#include"Imageformat.h"|

using namespace std;

class GIF:public Imageformat
{
	
public:
	GIF();
	virtual void Save();
};

#endif