#include <iostream>
using namespace std;

int arr[20];
int n;

void input() { //procedure

    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "Array dapat mempunyai maksimal 20 elemen" << endl;
        }
    }
    cout << "Masukkan elemen array" << endl;

    for (int i = 0; i < n; i++){
        cout << "Data ke-" << (i + 1) << ":";
    cin >> arr[i];
}

}
int main() {
}