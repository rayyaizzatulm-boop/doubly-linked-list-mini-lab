# Catatan Penggunaan AI

## Tujuan

File ini dibuat untuk mencatat penggunaan AI selama mengerjakan tugas Doubly Linked List Mini Lab.

## Bantuan yang Digunakan

Saya menggunakan AI untuk membantu memahami konsep Doubly Linked List dan mempelajari cara membuat program menggunakan bahasa C++.

AI juga membantu menjelaskan fungsi pointer `prev` dan `next`, serta cara melakukan penambahan dan penghapusan node.

## Hal yang Saya Pelajari

* Node digunakan untuk menyimpan data dan menghubungkan node lainnya.
* Pointer `next` digunakan untuk menuju node berikutnya.
* Pointer `prev` digunakan untuk menuju node sebelumnya.
* Saat menambahkan atau menghapus node, hubungan antar-pointer harus diperbarui agar list tetap terhubung dengan benar.


## Pengujian

Program sudah dijalankan melalui Terminal di VS Code. Dari hasil pengujian, list berhasil menampilkan data dari depan dan belakang.

Song X berhasil ditambahkan di antara Song B dan Song C, kemudian Song C berhasil dihapus dari list.

Pada pengujian bug, traversal mundur masih menampilkan Song C karena pointer `prev` belum diperbarui. Setelah diperbaiki, traversal mundur menampilkan data yang sesuai.

Dari pengujian ini, saya memahami bahwa pointer `prev` dan `next` harus diperbarui dengan benar saat node ditambahkan atau dihapus.

Catatan Tester: Task 9 break and fix sudah diuji.

