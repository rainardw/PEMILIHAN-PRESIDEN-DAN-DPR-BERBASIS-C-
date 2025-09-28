#include <iostream>
using namespace std;

struct SuaraPresiden {
    int jumlahSuaraPresiden1;
    int jumlahSuaraPresiden2;
};
struct SuaraDPR {
    int jumlahSuaraDPR1;
    int jumlahSuaraDPR2;
};
struct Pemilih {
    int pilihanPresiden;
    int pilihanDPR;
};
struct KPPS {
    Pemilih daftarPemilih[100];
    int jumlahPemilih;
};

void head() {
    cout << "============================================================================================================================" << endl;
    cout << "                                      /\\_/\\  SELAMAT DATANG DI TPS 71  ^.^                                                " << endl;
    cout << "                                    (  o-o  )      NEGERI KOKONA                                                            " << endl;
    cout << "                                    /|__^__|\\   SUARAKAN HAK PILIHMU!  O.^                                                  " << endl;
    cout << "============================================================================================================================" << endl;
}
void PrintHasil(){
    cout << "============================================================================================================================" << endl;
    cout << "                                            PANITIA PEMILIHAN SUARA(PPS)                                                " << endl;
    cout << "                                         DESA KODINGAN SULIT EROR MENJERIT                                              " << endl;
    cout << "                                                   NEGERI KOKONA                                                        " << endl;
    cout << "               Jl. Menangis Demi Kodingan Lancar No.2074 Desa Kodingan Sulit Eror Menjerit Negeri Kokona                " << endl;
    cout << "          Menerbitkan Surat Hasil Rekapitulasi dan Hasil Suara Pemilihan Capres/Wapres dan DPR Negeri Kokona            " << endl;
    cout << "                                        DISAHKAN PADA TANGGAL SURAT INI DI CETAK                                        " << endl;
    cout << "============================================================================================================================" << endl;
}

void tampilkanRekapSuara(SuaraPresiden presiden, SuaraDPR dpr) {
    cout << endl;
    cout << "===Hasil Rekapitulasi Suara===" << endl;
    cout << "Capres/Wapres no urut 1. Dr.Ir. Gojo Satoru, ST.,MT dan Dr. Nanami Kento, Sp.OT: " << presiden.jumlahSuaraPresiden1 << " suara" << endl;
    cout << "Capres/Wapres no urut 2. Prof. Eren Yeager, SH.,M.Psi dan Mikasa Ackerman, S.sos.,M.Eng.,Ph.D: " << presiden.jumlahSuaraPresiden2 << " suara" << endl;
    cout << "DPR 1 --> Partai Marley: " << dpr.jumlahSuaraDPR1 << " suara" << endl;
    cout << "DPR 2 --> Partai Uchiha : " << dpr.jumlahSuaraDPR2 << " suara" << endl;
    cout << endl;
}

void tampilkanHasilPresiden(SuaraPresiden presiden) {
    cout << "``````````````````````````````````````````````Hasil pemilihan Capres/Cawapres````````````````````````````````````````````````" << endl;
    if (presiden.jumlahSuaraPresiden1 > presiden.jumlahSuaraPresiden2) {
        cout << "Capres/Wapres dengan suara terbanyak: DR.Ir. Gojo Satoru, ST.,MT dan Dr. Nanami Kento, Sp.OT " << endl;
    } else if (presiden.jumlahSuaraPresiden2 > presiden.jumlahSuaraPresiden1) {
        cout << "Capres/Wapres dengan suara terbanyak: Prof. Eren Yeager, SH.,M.Psi dan Mikasa Ackerman, S.sos.,M.Eng.,Ph.D" << endl;
    } else {
        cout << "Pemilihan Capres/Wapres Seri" << endl;
    }
    cout << "`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````" << endl;
}

void tampilkanHasilDPR(SuaraDPR dpr) {
    cout << "===Hasil pemilihan DPR===" << endl;
    if (dpr.jumlahSuaraDPR1 > dpr.jumlahSuaraDPR2) {
        cout << "DPR dengan suara terbanyak: 1. Sekutu 1--> Partai Marley " << endl;
    } else if (dpr.jumlahSuaraDPR2 > dpr.jumlahSuaraDPR1) {
        cout << "DPR dengan suara terbanyak: 2. Oposisi 2--> Partai Uchiha " << endl;
    } else {
        cout << "Pemilihan DPR Seri" << endl;
    }

    if (dpr.jumlahSuaraDPR1 < dpr.jumlahSuaraDPR2) {
        cout << "DPR dengan suara tersedikit: 1. Sekutu 1--> Partai Marley " << endl;
    } else if (dpr.jumlahSuaraDPR2 < dpr.jumlahSuaraDPR1) {
        cout << "DPR dengan suara tersedikit: 2. Oposisi 2--> Partai Uchiha " << endl;
    } else {
        cout << "Pemilihan DPR Seri" << endl;
    }
    cout << "`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````" << endl;
}

void tampilkanMenu() {
    cout << "Menu: " << endl;
    cout << "1. Hasil Rekapitulasi suara dan hasil suara" << endl;
    cout << "2. Print Hasil rekapitulasi suara dan hasil suara" << endl;
}

bool login() {
    char username[20];
    char password[20];
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    // Username dan password buat LOGIN
    const char usernameKPPS[] = "adminKPPS";
    const char passwordKPPS[] = "admin";
    int i = 0;
    while (usernameKPPS[i] != '\0' && username[i] != '\0') {
        if (usernameKPPS[i] != username[i]) {
            return false;
        }
        i++;
    }
    if (usernameKPPS[i] != username[i])
        return false;
    i = 0;
    while (passwordKPPS[i] != '\0' && password[i] != '\0') {
        if (passwordKPPS[i] != password[i]) {
            return false;
        }
        i++;
    }
    if (passwordKPPS[i] != password[i])
        return false;
    return true;
}
int main() {
    SuaraPresiden presiden = {0, 0};
    SuaraDPR dpr = {0, 0};
    KPPS kpps;

    head();
    cout << "Masukkan jumlah pemilih: ";
    cin >> kpps.jumlahPemilih;
    system("pause");
    
    system("cls");
    head ();
    for (int i = 0; i < kpps.jumlahPemilih; ++i) {
        cout << "Pemilih " << i + 1 << ":" << endl;
        cout << "Capres/Wapres no urut 1. Dr.Ir. Gojo Satoru, ST.,MT dan Dr. Nanami Kento, Sp.OT" << endl;
        cout << "Capres/Wapres no urut 2. Prof. Eren Yeager, SH.,M.Psi dan Mikasa Ackerman, S.sos.,M.Eng.,Ph.D" << endl;
        cout << "Pilih Capres/Wapres (1 atau 2): ";
        cin >> kpps.daftarPemilih[i].pilihanPresiden;
        cout << "DPR 1 --> Partai Marley" << endl;
        cout << "DPR 2 --> Partai Uchiha" << endl;
        cout << "Pilih DPR (1 atau 2): ";
        cin >> kpps.daftarPemilih[i].pilihanDPR;
        if (kpps.daftarPemilih[i].pilihanPresiden == 1) {
            presiden.jumlahSuaraPresiden1++;
        } else if (kpps.daftarPemilih[i].pilihanPresiden == 2) {
            presiden.jumlahSuaraPresiden2++;
        }
        if (kpps.daftarPemilih[i].pilihanDPR == 1) {
            dpr.jumlahSuaraDPR1++;
        } else if (kpps.daftarPemilih[i].pilihanDPR == 2) {
            dpr.jumlahSuaraDPR2++;
        }
    }

    cout << "TERIMA KASIH SUDAH MENYALURKAN HAK SUARAMU! o.^ " << endl;
    system("pause");

    system("cls");
    head();
    if (login()) {
        cout << "Login berhasil! SELAMAT DATANG PETUGAS KPPS!..." << endl;
        system("pause");

        // Lanjut ke menu
        int pilihan;
        do {
            system("cls");
            head();
            tampilkanMenu();
            cout << "Pilih menu: ";
            cin >> pilihan;
            switch (pilihan) {
                case 1:
                    system("cls");
                    head();
                    tampilkanRekapSuara(presiden, dpr);
                    tampilkanHasilPresiden(presiden);
                    tampilkanHasilDPR(dpr);
                    cout << "Press any key to continue..." << endl;
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    PrintHasil();
                    cout << "Hasil Rekapitulasi dan Hasil Suara: " << endl;
                    tampilkanRekapSuara(presiden, dpr);
                    tampilkanHasilPresiden(presiden);
                    tampilkanHasilDPR(dpr);
                    
                    system("pause");
                    break;
                default:
                    cout << "Pilihan tidak valid!" << endl;
                    system("pause");
                    break;
            }
        } while (pilihan != 2);
            } else {
                char username[20];
                char password[20];
                cout << "Login gagal! Silakan masukkan kembali username dan password yang benar." << endl;
                while (!login()) {
                    cout << "Username: ";
                    cin >> username;
                    cout << "Password: ";
                    cin >> password;
                    cout << "Login gagal! Silakan masukkan kembali username dan password yang benar." << endl;
                }
                cout << "Login berhasil! SELAMAT DATANG PETUGAS KPPS!" << endl;
                system("pause");
}
    return 0;
    }