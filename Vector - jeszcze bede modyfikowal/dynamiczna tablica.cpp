#include "array.h"
#include <iostream>
#include <vector>
int main(void) {
	using std::cout;
	using std::endl;
	using std:: cin;
	My_Vector <double> t;
	t.push_back(5);
	t.push_back(3);
	t.push_back(69);
	t.pop_back();
	t.push_back(55);
	for (int i = 0; i < t.size(); i++) {
		cout << t[i] << endl;
	}
	return 0;
}