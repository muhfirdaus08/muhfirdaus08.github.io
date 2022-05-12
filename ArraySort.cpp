#include <iostream>

using namespace std;

int main()
{
    int a;
	cout<<"Jika diperoleh dua buah matriks dengan ukuran axa, maka masukkan nilai a : "; cin>>a;
	int matriks1[a][a], matriks2[a][a];
	cout<<"Maka masukkan nilai pada matriks 2 :\n";
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++){
			cout<<"Matriks1"<<"["<<i<<"]"<<"["<<j<<"] : "; cin>>matriks1[i][j];
		}
	}
	cout<<"\nKemudian, masukkan nilai pada matriks 2 :\n";
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++){
			cout<<"Matriks2"<<"["<<i<<"]"<<"["<<j<<"] : "; cin>>matriks2[i][j];
		}
	}
	cout<<"Sehingga diperoleh matriks berdasarkan inputan :\n";
	cout<<"Matriks1 :\n";
	for (int i = 0; i < a ;i++){
		for (int j = 0; j < a; j++)
			cout<<matriks1[i][j]<<"\t";
		cout<<endl;
	}
	cout<<"Matriks2 :\n";
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++)
			cout<<matriks2[i][j]<<"\t";
		cout<<endl;
	}

	//a. mengurutkan data di dalam matriks
	cout<<"\nMatriks setelah diurutkan :\n";
	int bil = 0;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			for(int k = 0; k < a; k++){
				for(int l = 0; l < a; l++){
					if(matriks1[k][l] > matriks1[i][j]){
						bil = matriks1[i][j];
						matriks1[i][j] = matriks1[k][l];
						matriks1[k][l] = bil;
					}
				}
			}
		}
	}
	cout<<"\nMatriks 1 :\n";
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++)
			cout<<matriks1[i][j]<<"\t";
		cout<<endl;
	}
	bil = 0;
	for(int i = 0; i < a; i++){
		for(int j = 0; j < a; j++){
			for(int k = 0; k < a; k++){
				for(int l = 0; l < a; l++){
					if(matriks2[k][l] > matriks2[i][j]){
						bil = matriks2[i][j];
						matriks2[i][j] = matriks2[k][l];
						matriks2[k][l] = bil;
					}
				}
			}
		}
	}
	cout<<"\nMatriks 2 :\n";
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++)
			cout<<matriks2[i][j]<<"\t";
		cout<<endl;
	}

    //b. perkalian matriks
	int matrix[a][a];
	cout<<"\nHasil perkalian matriks 1 dan matriks 2 setelah diurutkan adalah :\n";
	int jumlah = 0;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++){
			for (int k = 0; k < a; k++){
				jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
			}
			matrix[i][j] = jumlah;
			jumlah = 0;
		}
	}
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++)
			cout<<matrix[i][j]<<"\t";
		cout<<endl;
	}
}