#ifndef STRUCTKU_H_INCLUDED
#define STRUCTKU_H_INCLUDED

using namespace std;




//tugas tambahan
struct jenis{
    string jenis_barang;
    string jenis_merek;

};

struct data_barang{
    int jum_bar_mask;
    int total_harga;;
};


struct Elektronik
{
    string nama_barang;
    jenis Jenis;
    data_barang Data_barang;
    int harga;
    int tanggal;

};

struct Inventory
{
    Elektronik stok_barang;
};
#endif // STRUCTKU_H_INCLUDED


