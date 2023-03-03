#include "header.hh"
/*Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
int main()
{
    vector<Mahasiswa> dataMhs; // deklarasi list untuk menampung objek mahasiswa
    // instansiasi objek mahasiswa dan menambahkannya ke list
    Mahasiswa mhs1("123", "Minji", "perempuan", "Ador", "Minji@Ador.edu", "210", "Seni Tari", "New Jeans");
    dataMhs.push_back(mhs1);
    Mahasiswa mhs2("124", "Haerin", "perempuan", "Ador", "Haerin@Ador.edu", "211", "Seni Musik", "New Jeans");
    dataMhs.push_back(mhs2);
    Mahasiswa mhs3("125", "Hyein", "perempuan", "Ador", "Hyein@Ador.edu", "212", "Seni Musik", "New Jeans");
    dataMhs.push_back(mhs3);
    Mahasiswa mhs4("126", "Danielle", "perempuan", "Ador", "Danielle@Ador.edu", "213", "Seni Musik", "New Jeans");
    dataMhs.push_back(mhs4);
    Mahasiswa mhs5("127", "Hanni", "perempuan", "Ador", "Hanni@Ador.edu", "214", "Seni Tari", "New Jeans");
    dataMhs.push_back(mhs5);
    // menampilkan data mahasiswa
    cout << "============== Data Mahasiswa =============" << endl;
    for (int i = 0; i < dataMhs.size(); i++)
    {
        cout << "> Mahasiswa " << i + 1 << endl;
        dataMhs[i].tampil();
    }
    cout << endl;
    // ----------------------------------------------------------------------------------------------------------
    vector<Dosen> dataDosen; // deklarasi list untuk menampung objek Dosen
    // instansiasi objek Dosen dan menambahkannya ke list
    Dosen dosen1("221", "Wendy", "perempuan", "Ador", "Wendy@Ador.edu", "1901", "Seni Musik", "New Jeans", "S2", "Vokal");
    dataDosen.push_back(dosen1);
    Dosen dosen2("222", "Seulgi", "perempuan", "Ador", "Seulgi@Ador.edu", "1902", "Seni Tari", "New Jeans", "S2", "Dancer");
    dataDosen.push_back(dosen2);
    Dosen dosen3("223", "Joy", "perempuan", "Ador", "Joy@Ador.edu", "1903", "Seni Musik", "New Jeans", "S2", "Vokal");
    dataDosen.push_back(dosen3);
    Dosen dosen4("224", "Taeyeon", "perempuan", "Ador", "Taeyeon@Ador.edu", "1904", "Seni Musik", "New Jeans", "S3", "Vokal");
    dataDosen.push_back(dosen4);
    Dosen dosen5("225", "Lisa", "perempuan", "Ador", "Lisa@Ador.edu", "1905", "Seni Tari", "New Jeans", "S3", "Dancer");
    dataDosen.push_back(dosen5);
    // menampilkan data Dosen
    cout << "============== Data Dosen =============" << endl;
    for (int i = 0; i < dataDosen.size(); i++)
    {
        cout << "> Dosen " << i + 1 << endl;
        dataDosen[i].tampil();
    }
    cout << endl;
    // ----------------------------------------------------------------------------------------------------------
    vector<Course> dataCourse; // deklarasi list untuk menampung objek Course
    // instansiasi objek Course dan menambahkannya ke list
    Course matkul1("Olah vokal");
    dataCourse.push_back(matkul1);
    Course matkul2("Teknik vokal");
    dataCourse.push_back(matkul2);
    Course matkul3("Musik komputer");
    dataCourse.push_back(matkul3);
    Course matkul4("Olah tubuh");
    dataCourse.push_back(matkul4);
    Course matkul5("Analisis gerak");
    dataCourse.push_back(matkul5);
    // menampilkan data Course
    cout << "============== Data Mata Kuliah =============" << endl;
    for (int i = 0; i < dataCourse.size(); i++)
    {
        cout << "> Mata Kuliah " << i + 1 << endl;
        dataCourse[i].tampil();
    }
    cout << endl;

    // ----------------------------------------------------------------------------------------------------------
    vector<Prodi> dataProdi; // deklarasi list untuk menampung objek Prodi
    // instansiasi objek Prodi dan menambahkannya ke list
    Prodi prodi1("S-01", "Seni musik", dosen1, mhs2, matkul1);
    prodi1.setDosenProdi(dosen3);
    prodi1.setDosenProdi(dosen4);
    prodi1.setMahasiswaProdi(mhs3);
    prodi1.setMahasiswaProdi(mhs4);
    prodi1.setMatkulProdi(matkul2);
    prodi1.setMatkulProdi(matkul3);
    dataProdi.push_back(prodi1);

    Prodi prodi2("S-02", "Seni Tari", dosen2, mhs1, matkul4);
    prodi2.setDosenProdi(dosen5);
    prodi2.setMahasiswaProdi(mhs5);
    prodi2.setMatkulProdi(matkul5);
    dataProdi.push_back(prodi2);
    // menampilkan data Prodi
    cout << "============== Data Program Studi =============" << endl;
    for (int i = 0; i < dataProdi.size(); i++)
    {
        cout << "> Program studi " << i + 1 << endl;
        dataProdi[i].tampil();
    }
    cout << endl;
    return 0;
}
