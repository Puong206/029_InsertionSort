#include <iostream>
using namespace std;

void input() {

	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\rArray dapat mempunyai maksimal 20 elemen.\n";              //output ke layar
		}
	}
	cout << endl;                                    //output baris kosong
	cout << "===============" << endl;               //output ke layar
	cout << "Masukkan Elemen Array" << endl;         //output ke layar
	cout << "===============" << endl;               //output ke layar

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];

	}
}

void insertionSort() {
	int i, n, temp, j;
	int arr[9];

	for (i = 1; i <= n - 1; i++) {         //step 1

		temp = arr[i];                     //step 2

		j = i - 1;                         //step 3

		while (j >= 0 && arr[j] > temp)    //step 4
		{
			arr[j + 1] = arr[j];           //step 4a
			j--;                           //step 4b
		}

		arr[j + 1] = temp;                 //step 5
	}
}

int main()
{
	input();
	insertionSort();
	display();

}