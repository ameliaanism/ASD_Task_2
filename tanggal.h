/**
    KELAS     : IF 39-01
    KELOMPOK  : - (Maaf kami lupa pak)
    NAMA(NIM) : [Raden Rizky Falih P][1301154211] , [Dwiferdio Seagal P][1301154323] , [Dhevin Andrean Akbar][1301150015] , [Amelia Anis][1301154547]
**/


#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal
{
    //=================================================
    // YOUR CODE STARTS HERE
    int dd, mm, yy;

    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);
int bulankehari(int A, int B);
#endif // TANGGAL_H_INCLUDED
