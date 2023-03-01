"""Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 3 dalam mata kuliah Desain Pemrograman Berorientasi 
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin."""
# import file
from human import Human


# deklarasi class SivitasAkademik yang merupakan inheritance dari class Human
class SivitasAkademik(Human):
    """
    class SivitasAkademik menjadi child class dari class Human karena sivitas akademik 
    adalah orang yang terlibat dalam kegiatan akademik. Oleh karena itu, secara objek, 
    class Human dan SivitasAkademik itu sama yaitu manusia
    """

    # CONSTRUCTOR
    def __init__(self, nik="", nama="", gender="", asalUniv="", emailEdu=""):
        super().__init__(nik, nama, gender)  # memanggil constructor dari parent class
        self.asalUniv = asalUniv
        self.emailEdu = emailEdu

    # PUBLIC METHPD
    # SETTER & GETTER

    @property
    def asalUniv(self):
        """ method yang digunakan sebagai getter untuk data asal universitas"""
        return self.__asalUniv

    @asalUniv.setter
    def asalUniv(self, asalUniv):
        """method yang digunakan sebagai setter untuk data asal universitas"""
        self.__asalUniv = asalUniv

    @property
    def emailEdu(self):
        """ method yang digunakan sebagai getter untuk data email universitas"""
        return self.__emailEdu

    @emailEdu.setter
    def emailEdu(self, emailEdu):
        """method yang digunakan sebagai setter untuk data email universitas"""
        self.__emailEdu = emailEdu

    def tampil(self):
        """method untuk menampilkan data dari class SivitasAkademik dan parent class-nya"""
        super().tampil()
        print("Asal Universitas  : ", self.asalUniv)
        print("Email Universitas : ", self.emailEdu)

    def tampilSivitasAkademik(self):
        """method untuk menampilkan data dari class SivitasAkademik"""
        print("========== Data Sivitas Akademik ==========")
        print("Asal Universitas  : ", self.asalUniv)
        print("Email Universitas : ", self.emailEdu)
