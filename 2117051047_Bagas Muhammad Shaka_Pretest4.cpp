#include <iostream>
using namespace std;
/*Pretest 4
  Nama: Bagas Muhammad Shaka
  Npm : 2117051047
  Kelas:DDP A 2021*/
  
int main(){
//Tipe Data
    int T;
	int bunga;
	int n;
    int tt;
	int i = 1;
	
//Input
	cin >> T ;    //Tabungan
	cin >> bunga; //Jumlahh Bunga
	cin >> n;     //Lama Pinjaman
 
    cout << "======================="<< endl;
    
//Output
    cout << "Jumlah simpanan : " << T << endl;
    
	while (i <= n){
   	tt= T+(T*bunga/100);
       cout << "Tabungan bulan ke-" << i << ":" << tt << endl;
    T = tt; i++;
	}
	
	return 0;
}
