#include <iostream>
#include <conio.h>

using namespace std;

const char* st = "Informasi\n";

int main() {
	int pj = 0;
	const char* p = st;

	while (*p++) {
		++pj;
		cout << pj << ":" << st;
	}

	_getch();
	return 0;
}