#include<iostream>
#include<string>

using namespace std;

struct makanan {
    string nama;
    int harga;
    float berat;
    string rasa;

};

int main() {

    makanan buah [3];


    buah[0].nama = "Melon";
    buah[0].harga = 100000;
    buah[0].berat = 5;
    buah[0].rasa = "manis";

    buah[1].nama = "Sirsat";
    buah[1].harga = 20000;
    buah[1].berat = 1;
    buah[1].rasa = "agak masam";

    buah[2].nama = "Mangga";
    buah[2].harga = 30000;
    buah[2].berat = 2;
    buah[2].rasa = "manis";



    cout << buah[0].nama <<endl;
    cout << "-" << buah[0].harga <<endl;
    cout << "-" << buah[0].berat <<endl;
    cout << "-" << buah[0].rasa <<endl;


    cout << buah[1].nama <<endl;
    cout << "-" << buah[1].harga <<endl;
    cout << "-" << buah[1].berat <<endl;
    cout << "-" << buah[1].rasa <<endl;


    cout << buah[2].nama <<endl;
    cout << "-" << buah[2].harga <<endl;
    cout << "-" << buah[2].berat <<endl;
    cout << "-" << buah[2].rasa <<endl;


    cin.get();
    return 0;
}
