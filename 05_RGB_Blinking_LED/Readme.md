# Proyek 5: RGB Blinking LED
LED RGB merupakan kombinasi tiga semikonduktor (LED) dalam satu package yang terdiri dari 3 pin untuk kendali warna Red-Green-Blue serta 1 pin sebagai kendali common cathode.

### Komponen yang dibutuhkan pada proyek ini:
* DT-AVR Inoduino (1),
* LED RGB (1),
* Project Board (1),
* Kabel Jumper (secukupnya).


<img src="/images/RGB_Blinking_LED.png" height="300">


### Langkah Proyek:
1. Siapkan alat dan bahan yang dibutuhkan,
2. Rangkai komponen sesuai dengan gambar diatas,
3. Hubungkan kabel USB DT-AVR Inoduino ke laptop/PC, kemudian pasang power supply 6.5-12 VDC ke modul dan hubungkan ke sumber PLN,
4. Buka software ArduinoTM IDE,
5. Jalankan kode program, atur konfigurasi pada software Arduino melalui menu Tools > Board > DT-AVR Inoduino, dan pilih menu Tools > Serial Ports > COMxx,
6. Tekan tombol upload program,
7. Amati nyala lampu LED RGB pada kurun waktu tertentu.

Program untuk menghasilkan nyala LED RGB berubah–ubah pada jeda waktu tertentu, diawali dengan inisialisasi kaki-kaki ke pin Inoduino yang mana sinyal yang mengatur LED RGB berwarna merah ke pin 6, warna hijau ke pin 5 dan warna biru ke pin 3. Kemudian deklarasi lama waktu tunda juga dilakukan agar lebih mudah dalam pengaturannya. Selanjutnya mendeklarasi pin – pin sebagai keluaran pada void setup. Pada program loop/perulangan, nyala lampu secara berurutan dari warna merah, hijau dan biru dengan waktu tunda diatur 500ms.
