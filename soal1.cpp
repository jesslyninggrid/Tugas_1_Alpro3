// Soal ini dijawab menggunakan bahasa C, tapi tidak apa-apa jika menggunakan extension CPP

/* 
Buat program yang meminta pengguna memasukkan sebuah kata (terdiri dari minimal 10 karakter), 
lalu tampilkan karakter per karakter menggunakan putchar().
*/

#include <stdio.h>
#include <string.h>

int main()
{
  char kata[100];
  int i, panjang;

  printf("Masukkan sebuah kata (minimal 10 karakter): ");
  scanf("%s", kata);

  panjang = strlen(kata);
  if (panjang < 10) 
    {
      printf("Kata yang dimasukkan kurang dari 10 karakter\n");
    } 
  else 
    {
      printf("Karakter satu per satu:\n");
        for (i = 0; i < panjang; i++) 
        {
          putchar(kata[i]);
          putchar('\n');
        }
    }
    return 0;
}

/*
Penjelasan logika program:
Program menggunakan #include <string.h> untuk memanggil library string, karena di dalam program nantinya akan menggunakan fungsi strlen().
Pertama-tama, Program meminta pengguna memasukkan sebuah kata lalu program akan menghitung panjang kata tersebut menggunakan fungsi strlen().
Jika panjang kata kurang dari 10 karakter maka program menampilkan pesan kesalahan. 
Jika panjang kata memenuhi syarat minimal 10 karakter, 
maka program menggunakan perulangan for untuk mengambil setiap karakter dari string 
dan menampilkannya satu per satu menggunakan fungsi putchar().
*/
