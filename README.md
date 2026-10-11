# Doubly Linked List Mini Lab

## 1. Deskripsi

Proyek ini dibuat untuk memenuhi tugas Doubly Linked List Mini Lab menggunakan bahasa pemrograman C++.

Doubly Linked List adalah struktur data yang setiap node-nya memiliki data dan dua pointer, yaitu `prev` dan `next`. Pointer `prev` digunakan untuk menuju node sebelumnya, sedangkan pointer `next` digunakan untuk menuju node berikutnya.

## 2. Anggota Kelompok

1. Nama: Aninda Marethaningtyas Cessary Putri Bellammy — NIM: 1030125300389
2. Nama: Rayya Izzatul Mila — NIM: 103012530009

## 3. Tujuan

* Memahami konsep Doubly Linked List.
* Membuat node yang memiliki pointer `prev` dan `next`.
* Melakukan traversal dari depan dan belakang.
* Mempelajari cara menambahkan dan menghapus node.
* Memahami pentingnya memperbarui pointer agar list tetap terhubung dengan benar.

## 4. Fitur Program

Program ini mencakup:

1. Membuat list berisi lima lagu, dari Song A sampai Song E.
2. Menampilkan list dari depan (*forward traversal*).
3. Menampilkan list dari belakang (*backward traversal*).
4. Menambahkan Song X di antara Song B dan Song C.
5. Menghapus Song C dari list.
6. Memberikan contoh penerapan Doubly Linked List pada browser history.
7. Membandingkan prediksi hasil penghapusan dengan hasil program.
8. Menunjukkan contoh bug ketika pointer `prev` tidak diperbarui dan memperbaikinya.

## 5. Struktur Folder

```text
doubly-linked-list-mini-lab/
├── README.md
├── AI-NOTES.md
├── REFLECTION.md
└── src/
    └── main.cpp
```

## 6. Cara Menjalankan Program

Pastikan compiler C++ sudah terpasang. Buka Terminal di folder proyek, lalu jalankan:

```bash
g++ src/main.cpp -o main
./main
```

## 7. Hasil Pengujian

Program berhasil menampilkan data dari depan dan belakang. Song X berhasil ditambahkan di antara Song B dan Song C, kemudian Song C berhasil dihapus.

Pengujian bug menunjukkan bahwa pointer `prev` yang tidak diperbarui dapat menyebabkan traversal mundur menampilkan node yang seharusnya sudah dihapus. Setelah pointer diperbaiki, hasil traversal mundur sesuai dengan list yang diharapkan.

## 8. Dokumentasi

Screenshot hasil program dan aktivitas pengerjaan akan ditambahkan sebagai dokumentasi proyek.

## 9. Kesimpulan

Melalui tugas ini, kami mempelajari cara kerja Doubly Linked List serta pentingnya memperbarui pointer `prev` dan `next` ketika menambahkan atau menghapus node.
