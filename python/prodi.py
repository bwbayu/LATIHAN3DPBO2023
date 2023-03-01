"""Saya Bayu Wicaksono NIM 2106836 mengerjakan soal Latihan 4 dalam mata kuliah Desain Pemrograman Berorientasi
Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin."""


class Prodi:
    """
    Class Prodi Agregasi dengan class Dosen karena suatu program studi itu memiliki dosen sebagai seseorang yang melaksanakan kegiatan mengajar,
    class Prodi juga agregasi dengan class Mahasiswa karena suatu program studi juga memiliki mahasiswa sebagai seseorang yang melaksanakan kegiatan pembelajaran,
    class Prodi juga agregasi dengan class Course karena suatu program studi memiliki mata kuliah sebagai subjek pembelajaran
    """
    # PRIVATE ATRIBUT
    __namaProdi = ""
    __kodeProdi = ""
    __listDosenProdi = []
    __listMhsProdi = []
    __listMatkulProdi = []

    # CONSTRUCTOR
    def __init__(self, dosenProdi: object, mhsProdi: object, matkulProdi: object, kodeProdi="", namaProdi=""):
        self.namaProdi = namaProdi
        self.kodeProdi = kodeProdi
        self.__listDosenProdi = []
        self.__listDosenProdi.append(dosenProdi)
        self.__listMhsProdi = []
        self.__listMhsProdi.append(mhsProdi)
        self.__listMatkulProdi = []
        self.__listMatkulProdi.append(matkulProdi)

    # SETTER & GETTER
    @ property
    def namaProdi(self):
        """ method yang digunakan sebagai getter untuk data nama program studi"""
        return self.__namaProdi

    @ namaProdi.setter
    def namaProdi(self, namaProdi):
        """method yang digunakan sebagai setter untuk data nama program studi"""
        self.__namaProdi = namaProdi

    @ property
    def kodeProdi(self):
        """ method yang digunakan sebagai getter untuk data kode program studi"""
        return self.__kodeProdi

    @ kodeProdi.setter
    def kodeProdi(self, kodeProdi):
        """method yang digunakan sebagai setter untuk data kode program studi"""
        self.__kodeProdi = kodeProdi

    def setMahasiswaProdi(self, mahasiswa):
        self.__listMhsProdi.append(mahasiswa)

    def getMahasiswaProdi(self):
        return self.__listMhsProdi

    def setDosenProdi(self, dosen):
        self.__listDosenProdi.append(dosen)

    def getDosenProdi(self):
        return self.__listDosenProdi

    def setMatkulProdi(self, matkul):
        self.__listMatkulProdi.append(matkul)

    def getMatkulProdi(self):
        return self.__listMatkulProdi

    # method
    def tampil(self):
        """method untuk menampilkan data dari class program studi dan agregat class-nya"""
        print("Nama Program Studi : ", self.namaProdi)
        print("Kode Program Studi : ", self.kodeProdi)
        print("List Dosen program studi : ")
        for i, item in enumerate(self.getDosenProdi()):
            print("> Dosen " + str(i+1))
            item.tampil()
        print("")
        print("List mata kuliah program studi : ")
        for i, item in enumerate(self.getMatkulProdi()):
            print("> Program Studi " + str(i+1))
            item.tampil()
        print("")
        print("Mahasiswa program studi : ")
        for i, item in enumerate(self.getMahasiswaProdi()):
            print("> Mahasiswa " + str(i+1))
            item.tampil()
        print("")
        print("=================================================")
