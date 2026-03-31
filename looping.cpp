#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

#include <iostream>
#include <ctime> 
using namespace std;

int main(){
    int X;
    
    //perulangan dengan FOR
    //mencetak tulisan sebanyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkan urutan angka yang berbeda
    srand(time(0));

    //Perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    X = 1 + rand()%10;

while(X<=5){
    cout<<"Bilangan acak = "<<X <<endl;
    X = rand()%10;
}

cout<<"Bilangan acak while yang terakhir ="<<X <<endl;
cout<<endl;

//Perulangan dengan DO...WHILE
cout<<"PERULANGAN DENGAN DO...WHILE"<<endl;
X = 1 + rand()%10;
do{
    cout<<"Bilangan acak ="<<X <<endl;
    X = rand()%10;
}while(X<=5);

cout<<"Bilangan acak do-while yang terakhir ="<<X <<endl;
cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60))
        status = "Lulus";
    else 
        status = "tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB, nilM, rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else 
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";
    
    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

#include <iostream>
using namespace std;

// Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// prosedur input
void input(){
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" <<endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" <<endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// prosedur untuk pengecekan kondisi 
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknologi Elektro";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid";
    }
}

// prosedu
void output(){
    cout << "\n=== HASIL SELEKSI ===" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "----------------------------------" << endl;
}

int main(){
    input();
    pilihanJurusan();
    output();

    return 0;
} 

































