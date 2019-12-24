#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <ostream>
using namespace std;
namespace coveringstreams {

	class complexnumber {
	private:
		double real;
		double imaginary;
	public:
		complexnumber();
		complexnumber(double real, double imaginary);
		complexnumber(const complexnumber& other);//copy constructor
		~complexnumber();
		//-------------setter and getters----------------------//
		void SetRe(double real);
		double GetRe() ;

		void SetIm(double imaginary);
		double GetIm();
		//----------------Norm,Radius,Angle-------------------//
		double norm();
		double radius();
		double angle();
		complexnumber complexconjugate();

		void polarform();

	};
	ostream& operator<<(ostream& out, complexnumber& com);
	complexnumber operator+(complexnumber& z1, complexnumber& z2);
	complexnumber operator+(double d, complexnumber& z1);
	complexnumber operator+(complexnumber& z1, double d);
	complexnumber operator*(complexnumber& z1, complexnumber& z2);
	complexnumber operator/(complexnumber& z1, complexnumber& z2);
	complexnumber operator*(complexnumber& z1, double d);
	complexnumber operator*(double d,complexnumber& z1);
}
