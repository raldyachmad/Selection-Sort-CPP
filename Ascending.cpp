#include<iostream>
using namespace std;

short int maksData, tukar, data[100], temp;

int main() {	
	// Awal Input
    cout << "Masukkan MaksData : ";
    cin >> maksData;
	
    for (int i = 0; i < maksData; i++) {
        cout << "Data ke - " << i + 1 << " = " ;
        cin >> data[i];
    }
    // akhir Input
	
	//Awal codingan Selection Sort Ascending
	for (int i = 0; i < maksData-1; i++) {
        tukar = i;
        for(int j = i+1; j < maksData; j++){
            if(data[j] < data[tukar]){
                tukar = j;
            }
        }
        temp = data[tukar];
        data[tukar] = data[i];
        data[i] = temp;
    }
    //Akhir codingan Selection Sort Ascending
    
    //Awal Output
    cout <<endl;
		cout <<"Hasil = ";
	    for(int i = 0; i < maksData; i++){
	        cout << data[i] << " ";
	    }
    //Akhir Output
    
    cin.get();
    return 0;
}
