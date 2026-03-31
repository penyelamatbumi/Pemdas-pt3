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


