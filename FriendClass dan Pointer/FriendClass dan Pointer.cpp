#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //Deklarasi Method
};

void mahasiswa::showNim() { //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}



