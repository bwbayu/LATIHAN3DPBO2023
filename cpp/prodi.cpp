#include "Header.hh"
/*Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

// CONSTRUCTOR
Prodi::Prodi()
{
    this->namaProdi = "";
    this->kodeProdi = "";
}
Prodi::Prodi(string kodeProdi, string namaProdi, Dosen dosenProdi, Mahasiswa mhsProdi, Course matkulProdi)
{
    this->namaProdi = namaProdi;
    this->kodeProdi = kodeProdi;
    this->listDosenProdi.push_back(dosenProdi);
    this->listMhsProdi.push_back(mhsProdi);
    this->listMatkulProdi.push_back(matkulProdi);
}

// GETTERS AND SETTERS
string Prodi::getNamaProdi()
{
    return this->namaProdi;
}
void Prodi::setNamaProdi(string namaProdi)
{
    this->namaProdi = namaProdi;
}

string Prodi::getKodeProdi()
{
    return this->kodeProdi;
}
void Prodi::setKodeProdi(string kodeProdi)
{
    this->kodeProdi = kodeProdi;
}

void Prodi::setMahasiswaProdi(Mahasiswa mahasiswa)
{
    this->listMhsProdi.push_back(mahasiswa);
}
vector<Mahasiswa> Prodi::getMahasiswaProdi()
{
    return this->listMhsProdi;
}

void Prodi::setDosenProdi(Dosen dosen)
{
    this->listDosenProdi.push_back(dosen);
}
vector<Dosen> Prodi::getDosenProdi()
{
    return this->listDosenProdi;
}

void Prodi::setMatkulProdi(Course matkulProdi)
{
    this->listMatkulProdi.push_back(matkulProdi);
}
vector<Course> Prodi::getMatkulProdi()
{
    return this->listMatkulProdi;
}

void Prodi::tampil()
{
    // method untuk menampilkan data dari class program studi dan agregat class-nya
    cout << "Nama Program Studi  : " << getNamaProdi() << endl;
    cout << "Kode Program Studi  : " << getKodeProdi() << endl;
    cout << "Dosen program studi : " << endl;
    for (int i = 0; i < this->listDosenProdi.size(); i++)
    {
        cout << "> Dosen " << i + 1 << endl;
        this->listDosenProdi[i].tampil();
    }
    cout << endl;
    cout << "Mata kuliah program studi : " << endl;
    for (int i = 0; i < this->listMatkulProdi.size(); i++)
    {
        cout << "> Mata kuliah " << i + 1 << endl;
        this->listMatkulProdi[i].tampil();
    }
    cout << endl;
    cout << "Mahasiswa program studi : " << endl;
    for (int i = 0; i < this->listMhsProdi.size(); i++)
    {
        cout << "> Mahasiswa " << i + 1 << endl;
        this->listMhsProdi[i].tampil();
    }
    cout << endl;
    cout << "=================================================" << endl;
}

Prodi::~Prodi() {}