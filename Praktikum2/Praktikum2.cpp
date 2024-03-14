#include <iostream>
using namespace std;

void input() {       // procedur untuk input
    while (true) {
        cout << "Masukkan Banyak elemen Pada Array : ";  // Output ke layar
        cin >> n;  // Input dari pengguna
        if (n <= 20) // Jika n kurang dari atau sama dengan 20
            break; // keluar dari loop

        else { // Jika n lebih dari 20
            cout << "\nArray hanya dapat menampung 20 elemen\n"; //output ke layar
        }
    }
    cout << endl; //output baris kosong
    cout << "=================\n"; //output ke layar
    cout << "Masukkan Elemen Array\n"; //output ke layar
    cout << "================\n"; //output ke layar

    for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //output ke layar
        cin >> arr[i]; //input dari pengguna
    }

}

void inserionSort() {
	int i, temp, j;
	int arr[9];
    int n;

	for (i = 1; i <= n - 1; i++) { // step 1

		temp = arr[i]; //step 2

		j = i - 1; //step 3

		while (j >= 0 && arr[j] > temp) // step 4
		{
			arr[j + 1] = arr[j]; // step 4a
			j--; //step 4b
		}
		arr[j + 1] = temp; //step 5
	}
}


int main()
{
	input();
	inserionSort();

}
