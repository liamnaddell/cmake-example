#include <iostream>
#include "lib.h"

using namespace std;

/*class ex {
	private:
		int data;
};*/
ex::ex(int data) : data(data) {
}
void ex::print() {
	cout << data << '\n';
}
int ex::get_data() {
	return data;
}

void p(int i) {
	cout << i;
}
