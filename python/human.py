"""Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi 
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin."""


class Human:  # deklarasi class
    """
    class Human menjadi parent class karena objek sivitas akademik itu berisi objek manusia ex. mahasiswa, dosen
    tapi tidak semua objek Human itu termasuk sivitas akademik ex. pengusaha
    """

    # CONSTRUCTOR

    def __init__(self, nik="", nama="", gender=""):
        self.nik = nik
        self.nama = nama
        self.gender = gender

    # PUBLIC METHOD
    # SETTER & GETTER

    @property
    def nik(self):
        """ method yang digunakan sebagai getter untuk data nik"""
        return self.__nik

    @nik.setter
    def nik(self, nik):
        """method yang digunakan sebagai setter untuk data nik"""
        self.__nik = nik

    @property
    def nama(self):
        """ method yang digunakan sebagai getter untuk data nama"""
        return self.__nama

    @nama.setter
    def nama(self, nama):
        """method yang digunakan sebagai setter untuk data nama"""
        self.__nama = nama

    @property
    def gender(self):
        """ method yang digunakan sebagai getter untuk data gender"""
        return self.__gender

    @gender.setter
    def gender(self, gender):
        """method yang digunakan sebagai setter untuk data gender"""
        self.__gender = gender

    def tampil(self):
        """Method untuk menampilkan data class Human"""
        print("NIK               : ", self.nik)
        print("Nama              : ", self.nama)
        print("Jenis Kelamin     : ", self.gender)
