# pragma once
# include <iostream>
# include"Product.h"
# include <string>
//# include "Imageformat.h"

using namespace std;

void main()
{
	string s = "jk.png";
	Product * p1=new Product;
	
	p1->Upload(s);
	cin >> s;
}