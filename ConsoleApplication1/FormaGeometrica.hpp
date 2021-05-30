#include <iostream>
using namespace std;

#ifndef FormaGeometrica_hpp
#define FormaGeometrica_hpp

class FormaGeometrica
{
public:
	virtual double caculaArea(int, int) = 0;

protected:
	float area;
};


#endif // !FormaGeometrica_hpp