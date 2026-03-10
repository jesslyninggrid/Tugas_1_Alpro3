// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/*
Buat program yang membaca satu karakter menggunakan getchar(), getche(), dan getch(). 
Tampilkan karakter yang dimasukkan setelah setiap input.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char a, b, c;

    printf("Masukkan satu karakter menggunakan getchar: ");
    a = getchar();
    printf("Karakter yang dimasukkan: %c\n\n", a);

    printf("Masukkan satu karakter menggunakan getche: ");
    b = getche();
    printf("\nKarakter yang dimasukkan: %c\n\n", b);

    printf("Masukkan satu karakter menggunakan getch: ");
    c = getch();
    printf("\nKarakter yang dimasukkan: %c\n", c);

    return 0;
}

/*
Penjelasan logika program:
Program akan meminta pengguna memasukkan satu karakter dengan tiga cara input berbeda.
Pertama menggunakan getchar() dari stdio.h yang membaca satu karakter dari keyboard, namun harus menekan enter terlebih dahulu agar program dapat membaca.
Kedua menggunakan getche() dari conio.h yang membaca karakter dan langsung menampilkannya di layar. 
Ketiga menggunakan getch() yang membaca karakter tanpa menampilkannya di layar. Setelah setiap input, program menampilkan kembali karakter
yang dimasukkan oleh pengguna menggunakan printf.
*/
