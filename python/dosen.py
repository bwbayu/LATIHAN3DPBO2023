"""Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi 
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin."""
from sivitasAkademik import SivitasAkademik

# deklarasi class Mahasiswa yang merupakan inheritance dari class SivitasAkademik


class Dosen(SivitasAkademik):
    """
    class Dosen menjadi child class dari sivitas akademik karena dosen itu termasuk objek dalam sivitas akademik
    """
    # PRIVATE ATRIBUT
    __nip = ""
    __prodi = ""
    __fakultas = ""
    __pendTerakhir = ""
    __keahlian = ""

    # CONSTRUCTOR
    def __init__(self, nik="", nama="", gender="", asalUniv="", emailEdu="", nip="", prodi="", fakultas="", pendTerakhir="", keahlian=""):
        # memanggil constructor dari parent class
        super().__init__(nik, nama, gender, asalUniv, emailEdu)
        self.nip = nip
        self.prodi = prodi
        self.fakultas = fakultas
        self.pendTerakhir = pendTerakhir
        self.keahlian = keahlian

    # SETTER & GETTER
    @property
    def nip(self):
        """ method yang digunakan sebagai getter untuk data NIP dosen"""
        return self.__nip

    @nip.setter
    def nip(self, nip):
        """method yang digunakan sebagai setter untuk data NIP dosen"""
        self.__nip = nip

    @property
    def prodi(self):
        """ method yang digunakan sebagai getter untuk data program studi dosen"""
        return self.__prodi

    @prodi.setter
    def prodi(self, prodi):
        """method yang digunakan sebagai setter untuk data program studi dosen"""
        self.__prodi = prodi

    @property
    def fakultas(self):
        """ method yang digunakan sebagai getter untuk data fakultas dosen"""
        return self.__fakultas

    @fakultas.setter
    def fakultas(self, fakultas):
        """method yang digunakan sebagai setter untuk data fakultas dosen"""
        self.__fakultas = fakultas

    @property
    def pendTerakhir(self):
        """ method yang digunakan sebagai getter untuk data pendidikan terakhir dosen"""
        return self.__pendTerakhir

    @pendTerakhir.setter
    def pendTerakhir(self, pendTerakhir):
        """method yang digunakan sebagai setter untuk data pendidikan terakhir dosen"""
        self.__pendTerakhir = pendTerakhir

    @property
    def keahlian(self):
        """ method yang digunakan sebagai getter untuk data keahlian dosen"""
        return self.__keahlian

    @keahlian.setter
    def keahlian(self, keahlian):
        """method yang digunakan sebagai setter untuk data keahlian dosen"""
        self.__keahlian = keahlian

    def tampil(self):
        """method untuk menampilkan data dari class Dosen dan parent class-nya"""
        super().tampil()
        print("NIP                 : ", self.nip)
        print("Program Studi       : ", self.prodi)
        print("Fakultas            : ", self.fakultas)
        print("Pendidikan Terakhir : ", self.pendTerakhir)
        print("Keahlian            : ", self.keahlian)
        print("===========================================")

    def tampilDosen(self):
        """method untuk menampilkan data dari class Dosen"""
        print("============== Data Dosen =============")
        print("NIP                 : ", self.nip)
        print("Program Studi       : ", self.prodi)
        print("Fakultas            : ", self.fakultas)
        print("Pendidikan Terakhir : ", self.pendTerakhir)
        print("Keahlian            : ", self.keahlian)
