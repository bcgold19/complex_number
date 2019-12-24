#include <iostream>
#include <cmath>
#include <vector>
#include "complexnumber.h"
using namespace std;
using namespace coveringstreams;
int main() {

	complexnumber z1(2, 1);
	cout << z1 << endl;
	cout << z1.radius() << endl;
	cout << z1.angle() << endl;
	z1.polarform();
	//negative value of the angle represents complex number rotated to the clock-wise direction

}