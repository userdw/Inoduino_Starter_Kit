# Proyek 2: Ultrasonic Distance Sensor
Percobaan kedua modul Inoduino dengan menggunakan masukan berupa sensor ultrasonik dan keluaran tampilan LCD 16x2. Cara kerja sensor ultrasonik didasarkan pada prinsip dari pantulan suatu gelombang suara, sehingga dapat dipakai untuk menafsirkan eksistensi (jarak) suatu benda dengan frekuensi tertentu. Disebut sensor ultrasonik karena sensor ini menggunakan gelombang ultrasonic (bunyi ultrasonik).
Sensor ultrasoinik akan mengirimkan gelombang ketika ada pulsa trigger dari kontroler. Gelombang frekuensi 40 KHz akan dipancarkan selama 200 μs yang mana merambat melalui media udara dengan kecepatan 340 m/s atau 29.412 μs/cm, mengenai objek dan terpantul kembali ke sensor. Selama menunggu pantulan, sensor ultrasonic membentuk sebuah pulsa yang bernilai 0 atau low ketika gelombang terdeteksi. Maka dari itu, lebar pulsa yang dihasilkan dapat merepresentasikan jarak antara sensor ultrasonic dengan objek tertentu. Selanjutnya mikrokontroler cukup mengukur lebar pulsa tersebut dan melakukan konversi
dengan perhitungan sebagai berikut:

Jarak = (lebar pulsa/29.412)/2 (cm)

### Komponen yang dibutuhkan pada proyek ini:
* DT-AVR Inoduino (1),
* Sensor ultrasonik (1),
* LCD 16x2 (1),
* Project Board (1),
* Kabel Jumper (secukupnya).


<img src="/images/Ultrasonic_Distance_Sensor.png" height="300">


### Langkah Proyek:
1. Siapkan alat dan bahan yang dibutuhkan,
2. Rangkai komponen sesuai dengan gambar diatas,
3. Hubungkan kabel USB DT-AVR Inoduino ke laptop/PC, kemudian pasang power supply 6.5-12 VDC ke modul dan hubungkan ke sumber PLN,
4. Buka software ArduinoTM IDE,
5. Jalankan kode program, atur konfigurasi pada software Arduino melalui menu Tools > Board > DT-AVR Inoduino, dan pilih menu Tools > Serial Ports > COMxx,
6. Tekan tombol upload program,
7. Amati tampilan LCD ketika sensor ultrasonik mengenai benda dengan jarak yang berbeda-beda.


Apabila tidak terdapat kesalahan, maka LCD akan menampilkan jarak benda ke sensor dalam satuan sentimeter.

Program dimulai dengan pemberian nama variabel atau inisialisasi port masukan dan
keluaran (input output). Pin trigger merupakan port keluaran sedangkan pin echo port
masukan. Dengan adanya proses inisialisasi variabel pada port yang digunakan, menyebabkan peripheral masukan dan keluaran dapat dikenali oleh Arduino. Cara inisialisasi port keluaran sama dengan masukan hanya beda dipenulisan. Karena menggunakan LCD, maka perlunya memasukkan library LCD berupa “#include <LiquidCrystal.h>” pada awal program.
Selanjutnya program void setup merupakan fungsi program yang hanya dieksekusi sekali
diawal penggunaan memberikan status pin menjadi input atau output.
Struktur program didalam fungsi loop secara berurutan berupa pembacaan, pengiriman
sinyal, dan hasil pin trigger Low. Selanjutnya, pin echo membaca atau menerima sinyal dan melakukan kalkulasi menggunakan rumus yang sudah dijelaskan diatas. Hasil perhitungan pulsa ditampilkan dalam satuan sentimeter ke layar LCD 16x2.
