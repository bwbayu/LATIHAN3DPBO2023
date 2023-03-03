/*Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include "Header.hh"

Course::Course()
{
    // CONSTRUCTOR KOSONG
    this->namaMatkul = "";
}

Course::Course(string namaMatkul)
{
    // CONSTRUCTOR
    this->namaMatkul = namaMatkul;
}

// GETTER & SETTER
string Course::getNamaMatkul()
{
    return this->namaMatkul;
}

void Course::setNamaMatkul(string namaMatkul)
{
    this->namaMatkul = namaMatkul;
}

void Course::tampil()
{
    cout << "Nama Mata Kuliah : " << getNamaMatkul() << endl;
    cout << "===========================================" << endl;
}

// Destructor
Course::~Course() {}