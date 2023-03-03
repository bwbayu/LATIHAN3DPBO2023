/*Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "Header.hh"

// CONSTRUCTOR
SivitasAkademik::SivitasAkademik()
    : Human()
{
    this->asalUniv = "";
    this->emailEdu = "";
}
SivitasAkademik::SivitasAkademik(string nik, string nama, string gender, string asalUniv, string emailEdu)
    : Human(nik, nama, gender)
{
    this->asalUniv = asalUniv;
    this->emailEdu = emailEdu;
}

// SETTER & GETTER
string SivitasAkademik::getAsalUniv()
{
    return asalUniv;
}
void SivitasAkademik::setAsalUniv(string asalUniv)
{
    this->asalUniv = asalUniv;
}
string SivitasAkademik::getEmailEdu()
{
    return emailEdu;
}
void SivitasAkademik::setEmailEdu(string emailEdu)
{
    this->emailEdu = emailEdu;
}

// Method untuk menampilkan data dari class SivitasAkademik dan parent class-nya
void SivitasAkademik::tampil()
{
    Human::tampil();
    cout << "Asal Universitas  : " << getAsalUniv() << endl;
    cout << "Email Universitas : " << getEmailEdu() << endl;
}

// Method untuk menampilkan data dari class SivitasAkademik
void SivitasAkademik::tampilSivitasAkademik()
{
    cout << "========== Data Sivitas Akademik ==========" << endl;
    cout << "Asal Universitas  : " << getAsalUniv() << endl;
    cout << "Email Universitas : " << getEmailEdu() << endl;
}

// Destructor
SivitasAkademik::~SivitasAkademik() {}
