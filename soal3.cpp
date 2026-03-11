// Soal ini dijawab menggunakan bahasa CPP

/*
    Buatlah program yang menerima input satu bilangan bulat (detik) 
    dan menampilkan output dalam format: X detik = H jam M menit S detik
*/
#include <iostream>
using namespace std;

int main() {
    int detik, jam, menit, sisa;

    cout << "Masukkan jumlah detik: ";
    cin >> detik;

    jam = detik / 3600;
    menit = (detik % 3600) / 60;
    sisa = detik % 60;

    cout << detik << " detik = "
         << jam << " jam "
         << menit << " menit "
         << sisa << " detik" << endl;

    return 0;
}

/*
    Program akan meminta pengguna memasukkan satu bilangan bulat berupa jumlah detik.
    Nilai tersebut disimpan ke dalam variabel detik. Selanjutnya program akan mengonversi detik tersebut menjadi jam, menit, dan detik.
    Pertama, program menghitung jumlah jam dengan membagi nilai detik dengan 3600, karena 1 jam sama dengan 3600 detik.
    Setelah itu program mencari sisa detik dari pembagian tersebut menggunakan operator modulus (%).
    Kedua, sisa detik tersebut digunakan untuk menghitung menit dengan membaginya dengan 60, karena 1 menit sama dengan 60 detik.
    Terakhir, program menghitung sisa detik yang tersisa dengan menggunakan operator modulus (%) terhadap 60. Setelah semua perhitungan selesai,
    program menampilkan hasil konversi dalam format X detik = H jam M menit S detik ke layar.
    */
