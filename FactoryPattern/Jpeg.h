# ifndef JPEG_H
# define JPEG_H

# include <iostream>
#include"Imageformat.h"|

using namespace std;

class Jpeg:public Imageformat
{
	
public:
	Jpeg();
	virtual void Save();
};

#endif