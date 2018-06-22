# include"Product.h"
# include <iostream>

# include "Imageformat.h"



Product::Product()
{}

void Product::Upload(string s)
{
	Imageformat* f1 = new Imageformat;
	Imageformat* f2 ;
	f2 = f1->createimage(s);
	f2->Save();

}