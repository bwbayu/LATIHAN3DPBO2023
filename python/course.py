"""Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi 
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin."""


class Course:
    """
    class Course ini menjadi objek yang dimiliki oleh class Program studi
    """
    # PRIVATE ATRIBUT
    __namaMatkul = ""
    # __listDosenMatkul = []
    # __listMhsMatkul = []

    # CONSTRUCTOR
    def __init__(self, namaMatkul=""):
        self.namaMatkul = namaMatkul
        # self.__listDosenMatkul = []
        # self.setDosenMatkul = dosen
        # self.__listMhsMatkul = []
        # self.setMahasiswaMatkul = mahasiswa

    @property
    def namaMatkul(self):
        """ method yang digunakan sebagai getter untuk data nama mata kuliah"""
        return self.__namaMatkul

    @namaMatkul.setter
    def namaMatkul(self, namaMatkul):
        """method yang digunakan sebagai setter untuk data nama mata kuliah"""
        self.__namaMatkul = namaMatkul

    # def setMahasiswaMatkul(self, mahasiswa: object):
    #     self.__listMhsMatkul.append(mahasiswa)

    # def getMahasiswaMatkul(self):
    #     return self.__listMhsMatkul

    # def setDosenMatkul(self, mahasiswa: object):
    #     self.__listDosenMatkul.append(mahasiswa)

    # def getDosenMatkul(self):
    #     return self.__listDosenMatkul

    def tampil(self):
        """method untuk menampilkan data dari class Course dan agregat class-nya"""
        # print("============== Data Course ===============")
        print("Nama Mata Kuliah : ", self.namaMatkul)
        # print("Mahasiswa yang mengikusi course : ")
        # for i, item in enumerate(self.getMahasiswaMatkul()):
        #     print("> Mahasiswa " + str(i+1))
        #     item.tampilMahasiswa()

        print("===========================================")
