/*Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "header.hh"

// CONSTRUCTOR
Human::Human()
{
    this->nik = "";
    this->nama = "";
    this->gender = "";
}
Human::Human(string nik, string nama, string gender)
{
    this->nik = nik;
    this->nama = nama;
    this->gender = gender;
}

// GETTERS & SETTERS
string Human::getNik()
{
    return this->nik;
}
void Human::setNik(string nik)
{
    this->nik = nik;
}
string Human::getNama()
{
    return this->nama;
}
void Human::setNama(string nama)
{
    this->nama = nama;
}
string Human::getGender()
{
    return this->gender;
}
void Human::setGender(string gender)
{
    this->gender = gender;
}

// PUBLIC METHOD
void Human::tampil()
{
    cout << "NIK               : " << getNik() << endl;
    cout << "Nama              : " << getNama() << endl;
    cout << "Jenis Kelamin     : " << getGender() << endl;
}

// Destructor
Human::~Human()
{
}
