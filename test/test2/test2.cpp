#include <iostream>
#include "lib.h"
#include <cassert>
#include "helpers.h"

using namespace std;


int main() {
	print_helper(2);

	ex ex(420);

	assert(ex.get_data() == 1);

	ex.print();

}
