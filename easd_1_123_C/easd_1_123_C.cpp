//jawaban:
// 1. sangat dibutuhkan karena setiap masalah harus dianalisa terlebih dahulu. 
// 2. dua data struktur adalah
		// a. statis yaitu ukuran datanya tetap, contohnya: array. 
		// b. dinamis yaitu ukuran datanya masih fleksibel atau belum berubah, contohnya: linken list.
// 3. faktor yang mempengaruhi adalah kecepatan mesin, complier yang berfungsi untuk menerjemahkan, operasi sistem, bahasa pemograman, size of the input, struktur data dan algoritma
// 4. menurut saya algoritma yang paling efisien adalah bubble sort. karena pengerjaannya tergolong mudah dan cepat dari algoritma yang lain.
// 5. yang tergolong kedalam 
		// a. quadratik = bubble sort, selection sort, insertion sort, dan shell short. 
		// b. loglinear = quick sort dan merge sort
// 6. mengimplementasikan program selection sort 

#include <iostream>
using namespace std;

int anggi[43];
int n = sizeof(anggi) / sizeof(*anggi);
int b;
int temp, posisi;

void input() {
	while (true) {
		cout << "masukan jumlah data pada array = ";
		cin >> n;

		if (n <= 43)
			break;
		else
			cout << "\n maksimum panjang array adalah 43 " << endl;

	}

	cout << "\n----------------------" << endl;
	cout << "\n Masukan element array" << endl;
	cout << "\n----------------------" << endl;

	for (int i = 0; i < n; i++) {
		temp = anggi[i];
		posisi = i;
		for (int b = 0; b < n; b++) {
			if (anggi[b] < temp) {
				temp = anggi[b];
				posisi = b;
			}
		}
		cout << "data ke- " << (i + 1) << " : ";
		cin >> anggi[i];
	}
}
void SelectionSort() {
	int i, AP;

	if (anggi[i] > anggi[AP])
		return;
	
	i = AP + 1;
	AP = (0, n - 2);

	while (i <= AP) {
		while (anggi[i] > AP) {
			i++;
		}
	}
	while (anggi[AP] <= i) {
		AP--;
	}
	if (i < AP) {
		swap(i, AP);
	}
}

void swap(int i, int AP) {

	temp = anggi[i];
	anggi[i] = anggi[AP];
	anggi[AP] = temp;

	cout << endl; 
	cout << i + 1 << " : ";
	for (int k = 0; k < n; k++) {
		cout << anggi[k] << " ";
	}
}


void display() {
	cout << "\n---------------------------" << endl;
	cout << "\n Hasil yang sudah diurutkan" << endl;
	cout << "\n---------------------------" << endl;

	for (int i = 0; i < n; i++) {
		cout << anggi[i] << " ";
	}
}

int main() {
	input();
	display();

	return 0;
}



