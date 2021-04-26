//Date.h
#pragma once
#include "Triad.h"

class Date : public Triad
{
public:
	Date();
	Date(double, double, double);
	Date(Date&);

	Date& operator = (const  Date&);
	friend ostream& operator << (ostream&, const  Date&);
	friend istream& operator >> (istream&, Date&);
	operator string() const;

	int Ñomparison(const Triad t1, const Triad t2) const;
	void TriadResult(int result);
	void date1(int result);

	Date& operator ++ ();
	Date& operator -- ();
	Date operator ++ (int);
	Date operator -- (int);
};

