#include <iostream>
#include <cmath>
#include <vector>
#include "complexnumber.h"
using namespace std;
using namespace coveringstreams;
template<typename T>
void bubble_Sort(T begin, T end) {
	T i, j;
	for (i = begin; i != end; i++) {
		for (j = begin; j != end; j++) {
			if (*i < *j) {
				swap(*i, *j);
			}
		}
	}
}
int main() {

	complexnumber z1(2, 1);
	complexnumber z2(3, 2);
	vector<complexnumber> v1;
	v1.push_back(z1);
	v1.push_back(z2);
	bubble_Sort(v1.begin(), v1.end());
	for (auto it = v1.begin(); it != v1.end(); it++) {
		cout << *it << endl;
	}
	//negative value of the angle represents complex number rotated to the clock-wise direction

}