# design = https://app.diagrams.net/#G13r5bbv5fKjPxxxM7k3WxqE9dwUNZRemG
"""Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 3 dalam mata kuliah Desain Pemrograman Berorientasi 
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin."""
# import file
from mahasiswa import Mahasiswa
from dosen import Dosen
from prodi import Prodi
from course import Course

dataMhs = []  # deklarasi list untuk menampung objek mahasiswa

# MEMASUKKAN DATA HARDCODE
# Mahasiswa 1
mhs1 = Mahasiswa("123", "Minji", "perempuan", "Ador", "Minji@Ador.edu",
                 "210", "Seni Tari", "New Jeans")
# # Mahasiswa 2
mhs2 = Mahasiswa("124", "Haerin", "perempuan", "Ador", "Haerin@Ador.edu",
                 "211", "Seni Musik", "New Jeans")
# Mahasiswa 3
mhs3 = Mahasiswa("125", "Hyein", "perempuan", "Ador", "Hyein@Ador.edu",
                 "212", "Seni Musik", "New Jeans")
# Mahasiswa 4
mhs4 = Mahasiswa("126", "Danielle", "perempuan", "Ador", "Danielle@Ador.edu",
                 "213", "Seni Musik", "New Jeans")
# Mahasiswa 5
mhs5 = Mahasiswa("127", "Hanni", "perempuan", "Ador", "Hanni@Ador.edu",
                 "214", "Seni Tari", "New Jeans")
# menambahkan objek mahasiswa ke list
dataMhs.append(mhs1)
dataMhs.append(mhs2)
dataMhs.append(mhs3)
dataMhs.append(mhs4)
dataMhs.append(mhs5)

# MENAMPILKAN DATA MAHASISWA
print("============== Data Mahasiswa =============")
for i, item in enumerate(dataMhs):
    print("> Mahasiswa " + str(i+1))
    item.tampil()

# ----------------------------------------------------------------------------------------------------------
dataDosen = []  # list untuk menampung data dosen

# Dosen 1
dosen1 = Dosen("221", "Wendy", "perempuan", "Ador", "Wendy@Ador.edu",
               "1901", "Seni Musik", "New Jeans", "S2", "Vokal")
# Dosen 2
dosen2 = Dosen("222", "Seulgi", "perempuan", "Ador", "Seulgi@Ador.edu",
               "1902", "Seni Tari", "New Jeans", "S2", "Dancer")
# Dosen 3
dosen3 = Dosen("223", "Joy", "perempuan", "Ador", "Joy@Ador.edu",
               "1903", "Seni Musik", "New Jeans", "S2", "Vokal")
# Dosen 4
dosen4 = Dosen("224", "Taeyeon", "perempuan", "Ador", "Taeyeon@Ador.edu",
               "1904", "Seni Musik", "New Jeans", "S3", "Vokal")
# Dosen 5
dosen5 = Dosen("225", "Lisa", "perempuan", "Ador", "Lisa@Ador.edu",
               "1905", "Seni Tari", "New Jeans", "S3", "Dancer")
# menambahkan objek dosen ke list
dataDosen.append(dosen1)
dataDosen.append(dosen2)
dataDosen.append(dosen3)
dataDosen.append(dosen4)
dataDosen.append(dosen5)

# MENAMPILKAN DATA DOSEN
print("")
print("================ Data Dosen ===============")
for i, item in enumerate(dataDosen):
    print("> Dosen " + str(i+1))
    item.tampil()

# ----------------------------------------------------------------------------------------------------------
dataCourse = []

# Course prodi 1
matkul1 = Course("Olah Vokal")
matkul2 = Course("Teknik Vokal")
matkul3 = Course("Musik Komputer")

# Course prodi 2
matkul4 = Course("Olah Tubuh")
matkul5 = Course("Analisis Gerak")
# menambahkan objek course ke list dataCourse
dataCourse.append(matkul4)
dataCourse.append(matkul1)
dataCourse.append(matkul2)
dataCourse.append(matkul3)
dataCourse.append(matkul5)
# menampilkan data mata kuliah
print("")
print("============ Data Mata Kuliah ===========")
for i, item in enumerate(dataCourse):
    print("> Program Studi " + str(i+1))
    item.tampil()

# ----------------------------------------------------------------------------------------------------------
dataProdi = []  # list untuk menampung data program studi

# prodi 1
prodi1 = Prodi(dosen1, mhs2, matkul1, "S-01", "Seni Musik")
# menambahkan data dosen ke prodi1
prodi1.setDosenProdi(dosen3)
prodi1.setDosenProdi(dosen4)
# menambahkan data mhs ke prodi1
prodi1.setMahasiswaProdi(mhs3)
prodi1.setMahasiswaProdi(mhs4)
# menahkan data matkul ke prodi1
prodi1.setMatkulProdi(matkul2)
prodi1.setMatkulProdi(matkul3)
# menambahkan objek prodi1 ke list prodi
dataProdi.append(prodi1)

# prodi 2
prodi2 = Prodi(dosen2, mhs1, matkul4, "S-02", "Seni Tari")
# menambahkan data dosen ke prodi2
prodi2.setDosenProdi(dosen5)
# menambahkan data mhs ke prodi2
prodi2.setMahasiswaProdi(mhs5)
# menahkan data matkul ke prodi2
prodi2.setMatkulProdi(matkul5)
# menambahkan objek prodi2 ke list prodi
dataProdi.append(prodi2)

# MENAMPILKAN DATA PROGRAM STUDI
print("")
print("========== Data Program Studi ===========")
for i, item in enumerate(dataProdi):
    print("> Program Studi " + str(i+1))
    item.tampil()
