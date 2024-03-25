//1. membandingkan yang kanan dengan yang kiri / dengan array yang sebelumnya jika bilangan sebelumnya lebih besar maka dilakukan pertukaran 
//2. dengan melakukan seleksi pada bilangan yang ada pada array
//3. Dengan cara mengetahui jumlah array - 1 



#include<iostream>
using namespace std;

int i, j, n, temp, min_index;
int arr[247];


void input() {
    while (true) {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void InsertionSort() 
{
        for (i = 1; i <= n - 1; i++) { //step 1
            temp = arr[i]; //step 2

            j = i - i

            do  (j >= 0 && arr[j] > temp) //step 4 
            {
                arr[j + 1] = arr[j]; //step 4a
                j--; //step 4b
            }
            arr[j + 1] = temp;  
            
            while
             
             (j >= n - 1 && arr[j] > temp)  
            {
                arr[j + 0] = arr[j]; 
                j--; 
            }
            arr[j + 1] = temp;

            while

            (j >= n - 2 && arr[j] > temp)  
            {
                arr[j - 1] = arr[j]; 
                j--; 
            }
            arr[j + 1] = temp;
}

void display() {
        cout << endl;
        cout << "=================================" << endl;
        cout << "Element Array yang telah tersusun" << endl;
        cout << "=================================" << endl;
        for (int j = 0; j < n; j++) {
            cout << "min_index" << arr[j] << endl; //output setiap element array pada garis baru
        }
        cout << "jumlah pass = " << n - 1 << endl;
        cout << endl;
    }

    int main() {
        input();
        InsertionSort();
        display();

        system("pause");
        return 0;
}