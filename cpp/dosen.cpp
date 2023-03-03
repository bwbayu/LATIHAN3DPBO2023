/*Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "Header.hh"

// Constructor
Dosen::Dosen() : SivitasAkademik()
{
    this->nip = "";
    this->prodi = "";
    this->fakultas = "";
    this->pendTerakhir = "";
    this->keahlian = "";
}
Dosen::Dosen(string nik, string nama, string gender, string asalUniv, string emailEdu, string nip, string prodi, string fakultas, string pendTerakhir, string keahlian)
    : SivitasAkademik(nik, nama, gender, asalUniv, emailEdu)
{
    this->nip = nip;
    this->prodi = prodi;
    this->fakultas = fakultas;
    this->pendTerakhir = pendTerakhir;
    this->keahlian = keahlian;
}

// GETTER & SETTER
string Dosen::getNip()
{
    return this->nip;
}

void Dosen::setNip(string nip)
{
    this->nip = nip;
}

string Dosen::getProdi()
{
    return this->prodi;
}

void Dosen::setProdi(string prodi)
{
    this->prodi = prodi;
}

string Dosen::getFakultas()
{
    return this->fakultas;
}

void Dosen::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Dosen::getPendTerakhir()
{
    return this->pendTerakhir;
}

void Dosen::setPendTerakhir(string pendTerakhir)
{
    this->pendTerakhir = pendTerakhir;
}

string Dosen::getKeahlian()
{
    return this->keahlian;
}

void Dosen::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

// Methods
void Dosen::tampil()
{
    cout << "NIP                 : " << getNip() << endl;
    cout << "Program Studi       : " << getProdi() << endl;
    cout << "Fakultas            : " << getFakultas() << endl;
    cout << "Pendidikan Terakhir : " << getPendTerakhir() << endl;
    cout << "Keahlian            : " << getKeahlian() << endl;
    cout << "===========================================\n";
}

void Dosen::tampilDosen()
{
    cout << "============== Data Dosen =============\n";
    cout << "NIP                 : " << getNip() << endl;
    cout << "Program Studi       : " << getProdi() << endl;
    cout << "Fakultas            : " << getFakultas() << endl;
    cout << "Pendidikan Terakhir : " << getPendTerakhir() << endl;
    cout << "Keahlian            : " << getKeahlian() << endl;
}

// Destructor
Dosen::~Dosen() {}
