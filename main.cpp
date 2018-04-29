#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string>
#include "structku.h"


using namespace std;

int n=0;
Inventory inv[10];
char pilmenu;
void tambah() {
    do{

    //cout<<"Masukan Jumlah :";cin>>tambahmenu;
    system("CLS");
    cout<<"Nama Barang          : ";cin>> (inv[n].stok_barang.nama_barang);
    cout<<"Jenis Barang         : ";cin>> (inv[n].stok_barang.Jenis.jenis_barang);
    cout<<"Jenis Merek          : ";cin>> (inv[n].stok_barang.Jenis.jenis_merek);
    cout<<"Jumlah Barang Masuk  : ";cin>> (inv[n].stok_barang.Data_barang.jum_bar_mask);
    cout<<"Total Harga          : ";cin>> (inv[n].stok_barang.Data_barang.total_harga);
    cout<<"Harga                : ";cin>> (inv[n].stok_barang.harga);
    cout<<"Tanggal              : ";cin>> (inv[n].stok_barang.tanggal);
    n++;
    system("CLS");
    cout<<"Apakah Ingin Menambahkan lagi ? ";cin>>pilmenu;
    }while(pilmenu=='Y'||pilmenu=='y');
    system("CLS");
}

void view(){

    for(int i=0; i< n; i++){
    cout<<"Nama Barang      : "<< (inv[i].stok_barang.nama_barang)<<"\n";
    cout<<"Jenis Barang         : "<<(inv[i].stok_barang.Jenis.jenis_barang)<<"\n";
    cout<<"Jenis Merek          : "<<(inv[i].stok_barang.Jenis.jenis_merek)<<"\n";
    cout<<"Jumlah Barang Masuk  : "<<(inv[i].stok_barang.Data_barang.jum_bar_mask)<<"\n";
    cout<<"Total Harga          : "<<(inv[i].stok_barang.Data_barang.total_harga)<<"\n";
    cout<<"Harga                : "<<(inv[i].stok_barang.harga)<<"\n";
    cout<<"Tanggal              : "<<(inv[i].stok_barang.tanggal)<<"\n";
    }
}

void hapus(){
    n--;
    cout<<"Hapus Data";
}



int main()
{
int pil;
char menu;

do{
        system("CLS");
cout<<"Toko Elektronik Maju Mundur "<<"\n";

cout<<"1.Tambahkan Data"<<"\n";
cout<<"2.Tampilkan Data"<<"\n";
cout<<"3.Hapus Data"<<"\n";
cout<<"Silahkan Anda Pilih : ";cin>>pil;

system("CLS");
if(pil==1){
    tambah();
}

else if(pil==2){
    view();
}

else if(pil==3){
    hapus();
}


cout<<"Kembali ke menu ? ";cin>>menu;
}while(menu=='Y'||menu=='y');
system("CLS");
}
