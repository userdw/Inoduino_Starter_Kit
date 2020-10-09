# Proyek 4: Ambient Light Monitoring
Pada project ini kita akan belajar membuat alarm berdasarkan cahaya sekitar menggunakan
photoresistor atau light dependent resistor (LDR). LDR merupakan resistor variabel dengan kendali cahaya. Resistansi dari LDR berkurang dengan bertambahnya intensitas cahaya yang diterima. LDR dapat digunakan pada rangkaian pendeteksi sensitivitas cahaya yang mana dipasangkan dengan resistor 10kΩ terhubung ke ground (GND). Resistor dipasang seri dengan LDR dan menjadi rangkaian pembagi tegangan. Tegangan pada node rangkaian tersebut bernilai proporsional dengan rasio perbandingan resistansinya yang mana berdasarkan Hukum Ohm.


### Modul-modul yang dibutuhkan pada proyek ini:
* DT-AVR Inoduino (1),
* Phototransistor (1),
* Relay modul 5V (1),
* LED (1),
* Buzzer (1),
* Resistor 220Ohm (1),
* Resistor 10kOhm (1), 
* Project Board (1),
* Kabel Jumper (secukupnya).


<img src="/images/Ambient_Light_Monitoring.png" height="300">


### Langkah Proyek:
1. Siapkan alat dan bahan yang dibutuhkan,
2. Rangkai komponen sesuai dengan gambar diatas,
3. Hubungkan kabel USB DT-AVR Inoduino ke laptop/PC, kemudian pasang power supply 6.5-12 VDC ke modul dan hubungkan ke sumber PLN,
4. Buka software ArduinoTM IDE,
5. Jalankan kode program, atur konfigurasi pada software Arduino melalui menu Tools > Board > DT-AVR Inoduino, dan pilih menu Tools > Serial Ports > COMxx,
6. Tekan tombol upload program,
7. Amati perubahan LED dan buzzer jika terdapat perubahan cahaya yang tertangkap oleh LDR.

Program awal pada project ini mempunyai inisialisasi pin antara lain phototransistor ke pin A0, LED ke pin 11, relay ke pin 10, dan buzzer ke pin 12. Pada fungsi void loop hasil pembacaan sinyal analog phototransistor akan dibandingkan, jika lebih besar atau sama dengan 400 maka LED dan buzzer akan menyala, begitu juga sebaliknya.
