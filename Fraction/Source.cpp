#include <iostream>
using namespace std;

class Fraction
{
	int integer;
	int numerator;
	int denominator;
public:
	Fraction(int integ, int num, int denom)
		:integer{ integ }, numerator{ num }, denominator{ denom }
	{
		cout << "Fraction constructor" << this << endl;
	}
	Fraction():Fraction(5,1,1){}
	~Fraction()
	{
		cout << "Fraction destructor" << this << endl;
	}
	void print()
	{
		cout << integer << "(" << numerator << " / " << denominator << ")" << endl;
	}
};
int main()
{
	Fraction a{ 6,5,8 };
	Fraction b{ a };
	cout << "a = ";
	a.print();
	cout << "\nb = ";
    b.print();
	cout << '\n';
	return 0;
}