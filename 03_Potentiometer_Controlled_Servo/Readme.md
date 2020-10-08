# Proyek 3: Potentiometer Controlled Servo
Salah satu fitur mikrokontroler AVR yang merupakan 'core' dari Inoduino adalah ADC (Analog to Digital Converter) Internal. ADC merupakan piranti untuk meng-konversi nilai analog menjadi digital. ADC berfungsi sebagai masukan (seperti sensor) yang berupa analog, sedangkan mikrokontroler (Inoduino) adalah piranti digital sehingga harus ada yang ‘menghubungkan’ atau ‘mengubah’ dari analog ke digital.

### Modul-modul yang dibutuhkan pada proyek ini:
* DT-AVR Inoduino (1),
* Potensiometer (1),
* Motor servo SG90 (1),
* Project Board (1),
* Kabel Jumper (secukupnya).


<img src="/images/Potentiometer_Controlled_Servo.png" height="300">


### Langkah Proyek:
1. Siapkan alat dan bahan yang dibutuhkan,
2. Rangkai komponen sesuai dengan gambar diatas,
3. Hubungkan kabel USB DT-AVR Inoduino ke laptop/PC, kemudian pasang power supply 6.5-12 VDC ke modul dan hubungkan ke sumber PLN,
4. Buka software ArduinoTM IDE,
5. Jalankan kode program, atur konfigurasi pada software Arduino melalui menu Tools > Board > DT-AVR Inoduino, dan pilih menu Tools > Serial Ports > COMxx,
6. Tekan tombol upload program,
7. Amati putaran motor servo ketika potentiometer digerakkan pada sudut tertentu.

Apabila tidak terdapat kesalahan, gerakan micro Servo akan ditentukan dari putaran yang diberikan oleh potensiometer.

Didalam program ini terdapat pembacaan sinyal analog (tegangan dari potensiometer) yang terhubung ke pin A0. Hasil pembacaan sinyal analog antara 0 (minimal) sampai 1023 (maksimal) yang kemudian dikonversi ke putaran sudut 0 derajat (minimal) sampai 180 derajat (maksimal). Program konversi dari nilai ADC ke sudut adalah sebagai berikut:

sudut = map (sudut, 0, 1023, 0, 180);
