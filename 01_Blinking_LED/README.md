# Proyek 1: Blinking LED
Hampir semua awal dari eksplorasi dan pengembangan yang dilakukan pada embedded device dimulai dari mengedipkan LED, di mana hal tersebut digunakan untuk memastikan bahwa board kita dapat bekerja dengan baik, serta bagi kita agar mengetahui bagaimana bentuk kode yang paling sederhana untuk mengakses output pin dari board tersebut. Hal yang sama akan kita lakukan untuk perjalanan eksplorasi DT-AVR Inoduino kita. Melalui proyek ini, kami berharap Anda akan mendapatkan gambaran bahwa mengendalikan output pin pada DT-AVR Inoduino adalah hal yang mudah dilakukan. Proyek ini akan dibhas pengendalian keluaran berupa LED dengan masukan dari push buttton. LED merupakan salah satu bentuk perangkat keluaran berupa diode yang dapat menahan arus dan memancarkan cahaya. Biasanya LED sering digunakan sebagai indikator dalam sebuha rangkaian.

### Modul-modul yang dibutuhkan pada proyek ini:
* DT-AVR Inoduino (1),
* LED merah, kuning, hijau (3),
* Resistor 220 ohm (3),
* Push Button (3),
* Project Board (1),
* Kabel Jumper (secukupnya).

<img src="/images/Blinking_LED.png" height="400">

### Langkah Proyek:
1. Siapkan alat dan bahan yang dibutuhkan,
2. Rangkai komponen sesuai dengan gambar diatas,
3. Hubungkan kabel USB DT-AVR Inoduino ke laptop/PC, kemudian pasang power supply 6.5-12 VDC ke modul dan hubungkan ke sumber jala – jala PLN,
4. Buka software ArduinoTM IDE,
5. Jalankan kode program, atur konfigurasi pada software Arduino melalui menu Tools > Board > DT-AVR Inoduino, dan pilih menu Tools > Serial Ports > COMxx,
6. Tekan tombol upload program,
7. Amati nyala lampu LED dengan menekan masing-masing push button.

Apabila tidak terdapat kesalahan, maka LED akan menyala ketika salah satu push button ditekan.

Program dimulai dengan pemberian nama variabel atau inisialisasi port masukan dan keluaran (input output). Dengan adanya proses inisialisasi variabel pada port yang digunakan, menyebabkan peripheral masukan dan keluaran dapat dikenali oleh Arduino. Cara inisialisasi port keluaran sama dengan masukan hanya beda dipenulisan. Selanjutnya program void setup merupakan fungsi program yang hanya dieksekusi sekali diawal penggunaan memberikan status pin menjadi input atau output. INPUT_PULLUP merupakan pemanfaatan internal pullup resistor di arduino agar dalam kondisi input yang terbaca hanya 1 atau 0, dengan kondisi defaultnya (terbaca 1 jika tidak ada input) yaitu 1 sehingga input harus active low (input harus 0). Program didalam fungsi loop akan dieksekusi berulang terus - menerus. “else” digunakan pada kondisi ketika push button tidak ditekan sehingga semua LED mati.
