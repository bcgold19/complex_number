#include <iostream>
#include <cmath>
#include <vector>
#include "complexnumber.h"
using namespace std;
using namespace coveringstreams;
int main() {

	complexnumber z1(2, 1);
	complexnumber z2 = z1.complexconjugate();
	cout << z2 << endl;
	//negative value of the angle represents complex number rotated to the clock-wise direction

}