#pragma once
// Bilag til eksamen
class Dato
{
public:
	Dato();
	Dato(int, int, int);
	void setDato(int, int, int);
	int getDag() const;
	int getMaaned() const;
	int getAar() const;
	void print() const;
private:
	int dag_;
	int maaned_;
	int aar_;
};

