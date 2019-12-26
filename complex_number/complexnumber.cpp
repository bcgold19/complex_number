#include "complexnumber.h"
namespace coveringstreams {
	std::ostream& operator<<(std::ostream& stream,complexnumber& com) {
		stream <<"("<< com.GetRe() << "," << com.GetIm() << "i )";
		return stream;
	}
	complexnumber operator+(complexnumber& z1, complexnumber& z2)
	{
		return complexnumber(z1.GetRe()+z2.GetRe(),z1.GetIm()+z2.GetIm());
	}
	complexnumber operator+(double d, complexnumber& z1)
	{
		return complexnumber(z1.GetRe()+d,z1.GetIm());
	}
	complexnumber operator+(complexnumber& z1, double d)
	{
		return complexnumber(z1.GetRe() + d, z1.GetIm());
	}
	complexnumber operator*(complexnumber& z1, complexnumber& z2)
	{
		double step1 = z1.GetRe() * z2.GetRe() - z1.GetIm() * z2.GetIm();
		double step2 = z1.GetRe() * z2.GetIm() + z1.GetIm() * z2.GetRe();
		return complexnumber(step1,step2);
	}
	complexnumber operator/(complexnumber& z1, complexnumber& z2)
	{	
		if (z2.radius() != 0) {
			double r = z1.radius() / z2.radius();
			double angle = z1.angle() - z2.angle();
			return complexnumber(r * cos(angle), r * sin(angle));
		}
		else {
			cout << "second value of complex number is null" << endl;
			return complexnumber(0, 0);
		}
		return complexnumber();
	}
	complexnumber operator*(complexnumber& z1, double d)
	{

		return complexnumber(z1.GetRe()*d,z1.GetIm()*d);
	}
	complexnumber operator*(double d, complexnumber& z1)
	{
		return complexnumber(z1.GetRe() * d, z1.GetIm() * d);
	}
	complexnumber::complexnumber() :real(0), imaginary(0)
	{
	}

	complexnumber::complexnumber(double real, double imaginary) : real(real), imaginary(imaginary)
	{
	}

	complexnumber::complexnumber(const complexnumber& other)
	{
		real = other.real;
		imaginary = other.imaginary;
	}

	complexnumber::~complexnumber()
	{
	}

	void complexnumber::SetRe(double real)
	{
		this->real = real;
	}

	double complexnumber::GetRe ()
	{
		return this->real;
	}

	void complexnumber::SetIm(double imaginary)
	{
		this->imaginary = imaginary;
	}

	double complexnumber::GetIm()
	{
		return this->imaginary;
	}

	double complexnumber::norm()
	{
		return pow(this->GetRe(), 2) + pow(this->GetIm(), 2);
	}

	double complexnumber::radius()
	{
		double radius = sqrt(this->norm());
		return radius;
	}

	double complexnumber::angle()
	{
		if (this->GetRe() == 0 && this->GetIm() != 0) {
			return atan(1) * 4;
		}
		else if (this->GetRe() == 0 && this->GetIm() == 0) {
			return 0.0;
		}
		else if (this->GetRe() != 0 && this->GetIm() != 0) {
			if (real > 0) {
				return atan(this->GetIm() / this->GetRe());
			}
			else if (this->GetRe() < 0 && this->GetIm() > 0) {
				return atan(this->GetIm() / this->GetRe()) + atan(1) * 4;
			}
			else if (this->GetRe() < 0 && this->GetIm() < 0) {
				return atan(this->GetIm() / this->GetRe()) - atan(1) * 4;
			}
			else { return 0; }
		}
		else if (this->GetRe() != 0 && this->GetIm() == 0) {
			return atan(1) * 2;
		}
		else {
			return 0;
		}

	}

	complexnumber complexnumber::complexconjugate()
	{
		return complexnumber(this->GetRe(),-1*(this->GetIm()));
	}

	bool complexnumber::operator<(complexnumber& other)
	{
		return this->norm() < other.norm();
		
	}

	void complexnumber::polarform()
	{
		std::cout << this->radius() << "exp(" << this->angle() << " i)" << std::endl;
	}

}