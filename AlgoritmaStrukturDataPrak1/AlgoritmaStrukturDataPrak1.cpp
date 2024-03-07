#include <iostream>
using namespace std;

int arr[20];    //deklarasi array arr dengan ukuran 20
int n;          //deklarasi variable n untuk menyimpan banyak elemen

void input() {  //procedure untuk input

    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";  //output ke layar
        cin >> n;       //input dari pengguna
        if (n <= 20)    //jika n kurang dari atau sama dengan 20
            break;      //keluar dari loop
        else {          //jika n lebih dari 20
            cout << "Array dapat mempunyai maksimal 20 elemen" << endl; //output ke layar
        }
    }
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;    //output menampilkan "Masukkan elemen array"
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++){
        cout << "Data ke-" << (i + 1) << " : ";
        cin >> arr[i];
}

} void BubbleSortArray() {  //procedure untuk mengurutkan array
    int pass = 1;   //step 1
    do {
        for (int j = 0; j <= n - 1 - pass; j++) {   //step 2
            if (arr[j] > arr[j + 1]) {  //step 3
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        pass = pass + 1; //step 4

        cout << "\npass" << pass - 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    } while (pass < n - 1); //step 5
}
void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl; //output setiap element array pada garis baru
        if (j < n - 1) {
            cout << "--> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;
}
int main() {
    input();    
    BubbleSortArray();
    display();
    system("pause");

    return 0;
}