## Janji
Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Tugas latihan 4 DPBO 2023
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
- Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi
- Human: NIK, nama, jenis_kelamin
- SivitasAkademik: asal_universitas, email_edu
- Dosen: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian
- Course: nama_matakuliah, 
- Program Studi: nama_prodi, kode, course


# Desain Program

![design](https://user-images.githubusercontent.com/100755457/222151514-292375cf-2991-42c0-b741-404519292c52.jpg)



program ini dibuat menggunakan 6 class, yaitu :
1. class Human
- class Human memiliki 3 atribut yaitu NIK, nama, dan jenis kelamin. class Human merupakan parent class. method yang tersedia pada class ini terdiri dari setter dan getter untuk setiap atributnya, serta method untuk menampilkan data.

2. class SivitasAkademik
- class SivitasAkademik memiliki 2 atribut yaitu asal universitas dan email universitas. class SivitasAkademik merupakan subclass dari class Human karena sivitas akademik adalah sekumpulan manusia yang terdiri dari mahasiswa dan dosen, oleh karena itu pernyataan SivitasAkademik is a Human itu benar. class SivitasAkademik merupakan parent class untuk class Mahasiswa.

3. class Mahasiswa
- class Mahasiswa memiliki 3 atribut yaitu NIM, program studi, dan fakultas. class Mahasiswa merupakan child dari class SivitasAkademik karena mahasiswa termasuk kedalam komunitas sivitas akademik, oleh karena itu pernyataan Mahasiswa is a SivitasAkademik itu benar.

4. class Dosen
- class Dosen memiliki 5 atribut yaitu NIP, fakultas, prodi, pendidikan_terakhir, dan keahlian. class Dosen ini merupakan child dari class SivitasAkademik karena dosen itu termasuk ke dalam komunitas sivitas akademik, oleh karena itu pernyataan Dosen is a SivitasAkademik itu benar.

5. class Prodi
- class Prodi memiliki 5 atribut yaitu list of object Mahasiswa, list of object Dosen, list of object Course, kodeProdi, dan namaProdi. class Prodi ini berdiri sendiri, namun memiliki hubungan agregasi dengan class Mahasiswa, class Dosen, dan class Course, karena suatu prodi itu memiliki Mahasiswa, Dosen, dan Mata kuliahnya. Oleh karena itu pernyataan, prodi has a Mahasiswa, Dosen, Course itu benar.

6. class Course
- class Course ini memiliki 1 atribut yaitu namaMatkul. class Course ini menjadi salah satu bagian dari class Prodi.

# Alur Program
Pada program python, inputan dilakukan secara manual/hardcode, dan output dari program ini berupa data lengkap untuk Mahasiswa yang sudah termasuk SivitasAkademik dan Human, data Dosen yang sudah termasuk SivitasAkademik dan Human, data mata kuliah, dan data program studi yang di dalamnya sudah ada data mahasiswa, dosen, dan mata kuliah yang terdapat di prodi tersebut.

# Dokumentasi
- data Mahasiswa pada program python

![data mahasiswa](https://user-images.githubusercontent.com/100755457/222047662-03a8897f-7b73-43dd-8f15-8f8e67ad0046.png)

- data Dosen pada program python

![data dosen](https://user-images.githubusercontent.com/100755457/222047778-871d5ff5-3950-43ee-ac50-c57a49e9a2f7.png)


- data Course pada program python

![data mata kuliah](https://user-images.githubusercontent.com/100755457/222047823-3fe86418-ada2-4ed8-8c2a-2474298651d8.png)


- data Prodi pada program python

![data program studi](https://user-images.githubusercontent.com/100755457/222047836-82f2e03d-b493-4036-a337-f9b2436df084.png)

