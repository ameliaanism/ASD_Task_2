/**
    KELAS     : IF 39-01
    KELOMPOK  : - (Maaf kami lupa pak)
    NAMA(NIM) : [Raden Rizky Falih P][1301154211] , [Dwiferdio Seagal P][1301154323] , [Dhevin Andrean Akbar][1301150015] , [Amelia Anis][1301154547]
**/


#include "orang.h"

orang create_orang(string nama, int tgl, int bln, int thn)
{
    /**
    * fungsi mengeset orang org dengan nama, tgl, bln, thn, dan mengembalikan hasilnya
    * fungsi memanggil fungsi create_tanggal untuk membuat tanggal lahir
    **/
    orang org;
    //=================================================
    // YOUR CODE STARTS HERE

    org.nama=nama;
    org.tgl_lahir.dd=tgl;
    org.tgl_lahir.mm=bln;
    org.tgl_lahir.yy=thn;

    // YOUR CODE ENDS HERE
    //=================================================
    return org;
}

int hitung_umur(orang org)
{
    /**
    * fungsi menghitung umur orang org berdasarkan tahun 2016
    **/
    int umur = 0;
    //=================================================
    // YOUR CODE STARTS HERE

    umur=2016-org.tgl_lahir.yy;
    // YOUR CODE ENDS HERE
    //=================================================
    return umur;
}

void show_orang(orang org)
{
    /**
    * fungsi menampilkan nama, tanggal lahir dan umur orang org
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    cout<< "Nama:"<<org.nama<<endl;
    cout<< "Tanggal Lahir: ";
    show_tanggal(org.tgl_lahir);
    cout<<endl;
    cout<< "Umur : "<< hitung_umur(org)<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
