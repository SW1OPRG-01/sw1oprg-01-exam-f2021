// Bilag til eksamen

#include "Dato.h"
#include <iostream>
#include <iomanip>

using namespace std;

Dato::Dato(int dag, int maaned, int aar)
{
	setDato(dag, maaned, aar);
}

Dato::Dato()
{
	setDato(1, 1, 1970);
}

void Dato::setDato(int dag, int maaned, int aar)
{
	aar_ = (1970 <= aar && aar <= 2099) ? aar : 1970;
	maaned_ = (1 <= maaned && maaned <= 12) ? maaned : 1;
	switch (maaned_)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (1 <= dag && dag <= 31)
			dag_ = dag;
		else
			dag_ = 1;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		if (1 <= dag && dag <= 30)
			dag_ = dag;
		else
			dag_ = 1;
		break;

	case 2:
		// Februar check for skudaar
		if (aar_ % 4 == 0)
			dag_ = (1 <= dag && dag <= 29) ? dag : 1;
		else
			dag_ = (1 <= dag && dag <= 28) ? dag : 1;
		break;
	}

	return;
}

int Dato::getDag() const
{
	return dag_;
}

int Dato::getMaaned() const
{
	return maaned_;
}

int Dato::getAar() const
{
	return aar_;
}

void Dato::print() const
{
	cout << aar_ << "-" << setw(2) << setfill('0') << maaned_ << "-" << setw(2) << dag_;
}