#include <iostream>
#include <iomanip> 	// header untuk mengatur tampilan
using namespace std;

//deklarasi variabel x dan y
int x, y;

//fungsi f(x, y)
int fungsi(int x, int y){
	// f(x, y) = (22*x + 12*y)*4 + 210
	return (22*x + 12*y)*4 + 210;
}

//fungsi utama
int main(){
	//menampilkan judul
	cout << " ------------------------------------------------------" << endl;
	cout << "|            	  Program Array 2 Dimensi              |" << endl; 
	cout << " ------------------------------------------------------" << endl; 
	cout << endl;	//pindah baris
	
	//menampilkan rumus fungsi        
	cout << setw(22) << " " << "Rumus Fungsi\n" << endl; 		                    
	cout << setw(14) << " " << "f(x,y) = (22x + 12y)4 + 210" << endl;
	
	//deklarasi array ordo 5x5
	int Fian_22[5][5];
	
	//for loop memasukkan hasil fungsi ke dalam array
    for (int x=0; x<5; x++){ //x untuk baris
    	for (int y=0; y<5; y++){ //y untuk kolom
    		//memasukkan hasil fungsi ke dalam array
    		Fian_22[x][y] = fungsi(x, y); 
    	}
    }
	
	//deklarasi pointer array
	int *pointer = &Fian_22[0][0];
	
	cout << "\n\n ------------------------------------------------------" << endl;
	cout << " |           Menampilkan Elemen dalam Array           |" << endl;
	cout << " ------------------------------------------------------" << endl;
	cout << endl;	//pindah baris
	
	//for loop menampilkan elemen array
	for (int x=0; x<5; x++){
		//setw (int) untuk menambahkan spasi 
		cout << setw(15) << " | "; //menambahkan garis batas array
		for (int y=0; y<5; y++){
			cout << " " << *pointer  << " ";
			pointer++;  //increment variabel pointer
		}
		//menambahkan garis batas dan untuk pindah baris
		cout << " |" << endl; 
	}
	
	cout << "\n\n ------------------------------------------------------" << endl;	
	cout << " |          Menampilkan Alamat Elemen Array           |" << endl;
	cout << " ------------------------------------------------------" << endl;
	cout << endl;
	
	//for loop menampilkan alamat setiap elemen array
	for (int x=0; x<5; x++){
		cout << "  |" ; 	//menambahkan garis batas array
		for (int y=0; y<5; y++){
			cout << " " << pointer  << " ";
			pointer++;  //increment variabel pointer
		}
		//menambahkan garis batas dan untuk pindah baris
		cout << "|" << endl;
	}
	cout << endl; //pindah baris
}

