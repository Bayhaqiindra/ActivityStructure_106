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
	mhs1.nama = "Bayhaqi Indra Maulana";
	mhs1.alamat = "Riau";
	mhs1.umur = 18;

	cout << "Masukkan NIM :";
	cin >> mhs2.NIM;
	cout << "Masukkan Nama :";
	cin << mhs2.nama;
}