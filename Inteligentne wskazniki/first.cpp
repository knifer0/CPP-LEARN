#include <iostream>
#include <memory>
void f1() {
	std::unique_ptr < int[] > tab(new int[900000000]);
	std::cin.get();
}
void f2() {
	int* wsk = new int[900000000];
	std::cin.get();
}
int main(void) {
	f2();
	std::cin.get();
	return 0;
}


//mozliwa obserwacja w pamieci zadeklarowanej
