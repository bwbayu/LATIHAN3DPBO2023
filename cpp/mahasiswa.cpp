#include "Header.hh"
/*Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// CONSTRUCTOR
Mahasiswa::Mahasiswa() : SivitasAkademik()
{
    this->nim = "";
    this->prodi = "";
    this->fakultas = "";
}
Mahasiswa::Mahasiswa(string nik, string nama, string gender, string asalUniv, string emailEdu, string nim, string prodi, string fakultas)
    : SivitasAkademik(nik, nama, gender, asalUniv, emailEdu)
{
    this->nim = nim;
    this->prodi = prodi;
    this->fakultas = fakultas;
}

string Mahasiswa::getNim()
{
    return this->nim;
}

void Mahasiswa::setNim(string nim)
{
    this->nim = nim;
}

string Mahasiswa::getProdi()
{
    return this->prodi;
}

void Mahasiswa::setProdi(string prodi)
{
    this->prodi = prodi;
}

string Mahasiswa::getFakultas()
{
    return this->fakultas;
}

void Mahasiswa::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

void Mahasiswa::tampil()
{
    SivitasAkademik::tampil();
    cout << "NIM               : " << getNim() << endl;
    cout << "Program Studi     : " << getProdi() << endl;
    cout << "Fakultas          : " << getFakultas() << endl;
    cout << "===========================================" << endl;
}

void Mahasiswa::tampilMahasiswa()
{
    cout << "============== Data Mahasiswa =============" << endl;
    cout << "NIM               : " << getNim() << endl;
    cout << "Program Studi     : " << getProdi() << endl;
    cout << "Fakultas          : " << getFakultas() << endl;
}

// Destructor
Mahasiswa::~Mahasiswa() {}
