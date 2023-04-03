#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140106";
	mhs1.nama = "Bayhaqi";
	mhs1.alamat = "Riau";
	mhs1.umur = 18;
