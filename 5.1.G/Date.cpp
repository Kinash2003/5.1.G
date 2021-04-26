//Date.cpp
#include "Date.h"



Date::Date() : Triad(0, 0, 0) {}//конструктор за умовчанням
Date::Date(double first = 0, double second = 0, double third = 0) : Triad(first, second, third) {}//конструктор ініціалізації
Date::Date(Date& A) : Triad(A.GetFirst(), A.GetSecond(), A.GetThird()) {}//конструктор копіювання

Date& Date::operator = (const Date& A)//перевантаження операції "присвоєння"
{
	this->SetFirst(A.GetFirst());
	this->SetSecond(A.GetSecond());
	this->SetThird(A.GetThird());
	return *this;
}
ostream& operator << (ostream& out, const Date& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Date& A)
{
	double first, second, third;
	cout << " First = "; in >> first;
	cout << " Second = "; in >> second;
	cout << " Third = "; in >> third;
	cout << " " << first << "." << second << "." << third << endl;
	A.SetFirst(first); A.SetSecond(second), A.SetThird(third);
	return in;
}
Date::operator string() const
{
	stringstream ss;
	ss << " First: " << this->GetFirst() << endl;
	ss << " Second: " << this->GetSecond() << endl;
	ss << " Third: " << this->GetThird() << endl;
	return ss.str();
}

int Date::Сomparison(const Triad t1, const Triad t2) const
{
	if (t1 > t2)
		return 1;
	if (t1 < t2)
		return 2;
	if (t1 == t2)
		return 3;

}
void Date::TriadResult(int result)
{
	switch (result)
	{
	case 1:
		cout << " t1 > t2 " << endl;
		break;
	case 2:
		cout << " t1 < t2 " << endl;
		break;
	case 3:
		cout << " t1 = t2 " << endl;
		break;
	}

}
void Date::date1(int result)
{
	switch (result)
	{
	case 1:
		cout << " d1 > d2 " << endl;
		break;
	case 2:
		cout << " d1 < d2 " << endl;
		break;
	case 3:
		cout << " d1 = d2 " << endl;
		break;
	}
}
Date& Date::operator ++ ()//перевантаження операції "інкременту"(префіксна форма)
{
	this->SetFirst(this->GetFirst() + 1);
	return *this;
}
Date& Date::operator -- ()//перевантаження операції "дикременту"(префіксна форма)
{
	this->SetFirst(this->GetFirst() - 1);
	return *this;
}
Date Date::operator ++ (int)//перевантаження операції "інкременту"(постфіксна форма)
{
	Date t(*this);
	this->SetSecond(this->GetSecond() + 1);
	return t;
}
Date Date::operator -- (int)//перевантаження операції "дикременту"(постфіксна форма)
{
	Date t(*this);
	this->SetSecond(this->GetSecond() - 1);
	return t;
}
