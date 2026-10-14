/*
    Fungsi menu untuk navigasi
*/

#include <menu.hpp> // Menginclude header file di folder /include/
#include <iostream> // library standar
#include <ctime> // library untuk mengecek serta mendeteksi hari
#include <fstream> // Library untuk membaca file input dan output

void menu() {
    int input_menu; // variabel yang akan digunakan untuk menginput pilihan

    std::cout << "=== Main Menu ===\n";
    std::cout << "1. Lihat\n";
    std::cout << "2. Edit\n";
    std::cout << "3. Tambah (+)\n";
    std::cout << "4. Hapus (-)\n";
    std::cout << "5. Keluar..\n\n";
    std::cout << "Silahkan pilih (1-5) : ";
    std::cin >> input_menu;

    if (input_menu == 1) {
        
    }
}