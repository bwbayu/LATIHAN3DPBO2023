#include <bits/stdc++.h>
using namespace std;
/*Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

class Human
{
    /*class Human menjadi parent class dari class SivitasAkademik karena objek sivitas akademik itu berisi objek
    manusia ex. mahasiswa, dosen tapi tidak semua objek Human itu termasuk sivitas akademik ex. pengusaha*/
private:
    // private atribut
    string nik;
    string nama;
    string gender;

public:
    // constructor
    Human();
    Human(string nik, string nama, string gender);

    // getter & setter
    string getNik();
    void setNik(string nik);
    string getNama();
    void setNama(string nama);
    string getGender();
    void setGender(string gender);

    // method lain
    void tampil();

    // Destructor
    ~Human();
};

class SivitasAkademik : public Human // deklarasi class SivitasAkademik yang merupakan inheritance dari class Human
{
    /*
    class SivitasAkademik menjadi child class dari class Human karena sivitas akademik
    adalah orang yang terlibat dalam kegiatan akademik. Oleh karena itu, secara objek,
    class Human dan SivitasAkademik itu sama yaitu manusia*/
private:// PRIVATE ATRIBUT
    string asalUniv;
    string emailEdu;

public:
    // CONSTRUCTOR
    SivitasAkademik();
    SivitasAkademik(string nik, string nama, string gender, string asalUniv, string emailEdu);

    // getter setter
    string getAsalUniv();
    void setAsalUniv(string asalUniv);
    string getEmailEdu();
    void setEmailEdu(string emailEdu);

    // method lain
    void tampil();
    void tampilSivitasAkademik();

    // Destructor
    ~SivitasAkademik();
};

class Mahasiswa : public SivitasAkademik // deklarasi class Mahasiswa yang merupakan inheritance dari class SivitasAkademik
{
    /*
    class Mahasiswa menjadi child class dari sivitas akademik karena mahasiswa itu termasuk objek dalam sivitas akademik
    */
private:// PRIVATE ATRIBUT
    string nim;
    string prodi;
    string fakultas;

public:
    // CONSTRUCTOR
    Mahasiswa();
    Mahasiswa(string nik, string nama, string gender, string asalUniv, string emailEdu, string nim, string prodi, string fakultas);

    // SETTER GETTER
    string getNim();
    void setNim(string nim);
    string getProdi();
    void setProdi(string prodi);
    string getFakultas();
    void setFakultas(string fakultas);

    // METHOD LAIN
    void tampil();
    void tampilMahasiswa();

    // Destructor
    ~Mahasiswa();
};

class Dosen : public SivitasAkademik // deklarasi class Mahasiswa yang merupakan inheritance dari class SivitasAkademik
{
    /*class Dosen menjadi child class dari sivitas akademik karena dosen itu termasuk objek dalam sivitas akademik*/
private: // PRIVATE ATRIBUT
    string nip;
    string prodi;
    string fakultas;
    string pendTerakhir;
    string keahlian;

public:
    // Constructor
    Dosen();
    Dosen(string nik, string nama, string gender, string asalUniv, string emailEdu, string nip, string prodi, string fakultas, string pendTerakhir, string keahlian);

    // SETTER GETTER
    string getNip();
    void setNip(string nip);
    string getProdi();
    void setProdi(string prodi);
    string getFakultas();
    void setFakultas(string fakultas);
    string getPendTerakhir();
    void setPendTerakhir(string pendTerakhir);
    string getKeahlian();
    void setKeahlian(string keahlian);

    // METHOD LAIN
    void tampil();
    void tampilDosen();

    // Destructor
    ~Dosen();
};

class Course
{
    /*class Course ini menjadi objek yang dimiliki oleh class Program studi*/
private:
    // PRIVATE ATRIBUT
    string namaMatkul;

public:
    Course();
    Course(string namaMatkul);

    // GETTER & SETTER
    string getNamaMatkul();
    void setNamaMatkul(string namaMatkul);
    void tampil();

    // Destructor
    ~Course();
};

class Prodi
{
    /*
    Class Prodi Agregasi dengan class Dosen karena suatu program studi itu memiliki dosen sebagai seseorang yang melaksanakan kegiatan mengajar,
    class Prodi juga agregasi dengan class Mahasiswa karena suatu program studi juga memiliki mahasiswa sebagai seseorang yang melaksanakan kegiatan pembelajaran,
    class Prodi juga agregasi dengan class Course karena suatu program studi memiliki mata kuliah sebagai subjek pembelajaran*/
private:
    // PRIVATE ATRIBUT
    string namaProdi;
    string kodeProdi;
    vector<Dosen> listDosenProdi;
    vector<Mahasiswa> listMhsProdi;
    vector<Course> listMatkulProdi;

public:
    // CONSTRUCTOR
    Prodi();
    Prodi(string kodeProdi, string namaProdi, Dosen dosenProdi, Mahasiswa mhsProdi, Course Matkul);

    // GETTERS AND SETTERS
    string getNamaProdi();
    void setNamaProdi(string namaProdi);
    string getKodeProdi();
    void setKodeProdi(string kodeProdi);
    void setMahasiswaProdi(Mahasiswa mahasiswa);
    vector<Mahasiswa> getMahasiswaProdi();
    void setDosenProdi(Dosen dosen);
    vector<Dosen> getDosenProdi();
    void setMatkulProdi(Course matkul);
    vector<Course> getMatkulProdi();

    // METHOD LAIN
    void tampil();

    // DESTRUCTOR
    ~Prodi();
};