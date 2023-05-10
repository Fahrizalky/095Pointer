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

int main()
{
	mahasiswa mhs{ 1 };	//object mhs
	mhs.showNim();		//Member acces operator

	mahasiswa ref = mhs; //pointer reference refMhs
	ref.nim = 2;		// membuat acces operator
	
	mhs.showNim();
	mahasiswa* pMhs = &mhs;	//pointer deferences pMhs
	pMhs->nim = 3;			//membuat acces operator
	
	


