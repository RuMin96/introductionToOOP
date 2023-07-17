#include<iostream>
using namespace std;

class Fraction
{
	int integer;
	int numenator;
	int denomenator;
public:
	int get_integer()const
	{
		return integer;
	}
	int get_numenator()const
	{
		return numenator;
	}
	int get_denomenator()const
	{
		return denomenator;
	}
	void set_integer(int integer)
	{
		this->integer = integer;
	}
	void set_numenator(int numenator)
	{
		this->numenator = numenator;
	}
	void set_denomenator(int denomenator)
	{
		if (denomenator == 0)denomenator = 1;
		this->denomenator = denomenator;
	}
	Fraction()
	{
		this->integer = 0;
		this->numenator = 0;
		this->denomenator = 1;
		cout << "DefaultContructor:/t" << this << endl;
	}
	Fraction(int integer)
	{
		this->integer = integer;
		this->numenator = 0;
		this->denomenator = 1;
	}
	Fraction(int numenator, int denomenator)
	{
		this->integer = 0;
		this->numenator = numenator;
		set_denomenator(denomenator);
	}
	Fraction(int integer, int numenator, int denomenator)
	{
		this->integer = integer;
		this->numenator = numenator;
		set_denomenator(denomenator);
		cout << "Constructor:\t" << this << endl;
	}
	Fraction(const Fraction& other)
	{
		this->integer = other.integer;
		this->numenator = other.numenator;
		this->denomenator = other.denomenator;
		cout << "CopyConstructor:" << this << endl;
	}
	~Fraction()
	{
		cout << "Destructor:\t" << this << endl;
	}


void print()const
{
	if(integer)cout << integer;
	if (numenator)
	{
		if (integer)cout << "(";
		cout << numenator << "/" << denomenator;
		if (integer)cout << ")";
	}
	else if (integer == 0)cout << 0;
	cout << endl;

}
};

//#define CONSTRUCTORS_CHECK

void main()
{
	setlocale(LC_ALL, "");
#ifdef CONSTRUCTORS_CHECK
	Fraction A;
	A.print();

	Fraction B = 5;
	B.print();

	Fraction C(1, 2);
	C.print();

	Fraction D(2, 3, 4);
	D.print();

	Fraction E = C;
	E.print();
#endif CONSTRUCTORS_CHECK
}