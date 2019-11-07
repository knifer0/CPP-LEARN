#include <iostream>
#include <memory>
void f1() {
	std::unique_ptr < int[] > tab(new int[10000000000]);
	std::cin.get();
}
void f2() {
	int* wsk = new int[10000000000];
	std::cin.get();
}
int main(void) {
	f1();
	std::cin.get();
	return 0;
}
