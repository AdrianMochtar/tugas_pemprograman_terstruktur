#include <iostream>
#include <cmath>
using namespace std;

//MENAMBAH FUNGSI
void MatriksW(double w1, double w2, double w3, double w4, double w5){
	cout << endl;
	cout << "MATRIKS W :"<<endl;
	cout << w1 <<" | "<<w2<<" | "<<w3<<" | "<<w4<<" | "<<w5<<" | "<<endl;
	cout << endl;
}

int main(){
	
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);	

	//DEKLARASI VARIABEL DAN ISI DATA
	double a1c[5]={4,4,5,3,3};
	double a2c[5]={3,3,4,2,3};
	double a3c[5]={5,4,2,2,2};
	
	//MEMBUAT MATRIKS X DENGAN DO WHILE
	cout << "MATRIKS X : "<< endl;
	
	int x=0;
		do{
		cout << a1c[x]<< " | ";	x++;}
		while (x<5);cout << endl;
	int y=0;	
		do{
		cout << a1c[y]<< " | ";	y++;}
		while (y<5);cout << endl;
	int z=0;	
		do{
		cout << a3c[z]<< " | ";	z++;}
		while (z<5);cout << endl;
		cout << endl;
		
	//AMBIL NILAI MAX TIAP KRITERIA
	double mc[5]={
	max(a1c[0], max(a2c[0],a3c[0])),
	max(a1c[1], max(a2c[1],a3c[1])),
	max(a1c[2], max(a2c[2],a3c[2])),
	max(a1c[3], max(a2c[3],a3c[3])),
	max(a1c[4], max(a2c[4],a3c[4]))};
	
	//BUAT MATRIKS R BESERTA VARIABELNYA
	double Ra1c[5]={(a1c[0]/mc[0]),(a1c[1]/mc[1]),(a1c[2]/mc[2]),(a1c[3]/mc[3]),(a1c[4]/mc[4])};
	double Ra2c[5]={(a2c[0]/mc[0]),(a2c[1]/mc[1]),(a2c[2]/mc[2]),(a2c[3]/mc[3]),(a2c[4]/mc[4])};
	double Ra3c[5]={(a3c[0]/mc[0]),(a3c[1]/mc[1]),(a3c[2]/mc[2]),(a3c[3]/mc[3]),(a3c[4]/mc[4])};
	
	cout << "MATRIKS R : "<< endl;
	
	int a;
	for (a=0;a<5;a++)
	    cout << Ra1c[a]<< " | ";
	    cout << endl;
	    
	int b;
	for (b=0;b<5;b++)
	    cout << Ra2c[b]<< " | ";
		cout <<endl;
		
	int c;
	for (c=0;c<5;c++)
	    cout << Ra3c[c]<< " | ";
		cout << endl;
		cout << endl;
	
	//MEMANGGIL FUNGSI
	MatriksW(5,3,4,4,2);
	// DEKLARASI VARIABEL
	double Ra1c1,Ra1c2,Ra1c3,Ra1c4,Ra1c5;
	double Ra2c1,Ra2c2,Ra2c3,Ra2c4,Ra2c5;
	double Ra3c1,Ra3c2,Ra3c3,Ra3c4,Ra3c5;
	
	double RWa1c1,RWa1c2,RWa1c3,RWa1c4,RWa1c5;
	double RWa2c1,RWa2c2,RWa2c3,RWa2c4,RWa2c5;
	double RWa3c1,RWa3c2,RWa3c3,RWa3c4,RWa3c5;
		
	double w1,w2,w3,w4,w5;
	double mc1,mc2,mc3,mc4,mc5;
	double ha1,ha2,ha3;
	
	// MATRIKS R * W
	RWa1c1 = Ra1c1*w1;
	RWa1c2 = Ra1c2*w2;
	RWa1c3 = Ra1c3*w3;
	RWa1c4 = Ra1c4*w4;
	RWa1c5 = Ra1c5*w5;

	RWa2c1 = Ra2c1*w1;
	RWa2c2 = Ra2c2*w2;
	RWa2c3 = Ra2c3*w3;
	RWa2c4 = Ra2c4*w4;
	RWa2c5 = Ra2c5*w5;
	
	RWa3c1 = Ra3c1*w1;
	RWa3c2 = Ra3c2*w2;
	RWa3c3 = Ra3c3*w3;
	RWa3c4 = Ra3c4*w4;
	RWa3c5 = Ra3c5*w5;
	
	// PENJUMLAHAN HASIL R * W	
	ha1=RWa1c1+RWa1c2+RWa1c3+RWa1c4+RWa1c5;
	ha2=RWa2c1+RWa2c2+RWa2c3+RWa2c4+RWa2c5;
	ha3=RWa3c1+RWa3c2+RWa3c3+RWa3c4+RWa3c5;
		
	// MENAMPILKAN NILAI
	cout << "MATRIKS R * W :"<<endl;
	cout << RWa1c1 <<" | "<<RWa1c2<<" | "<<RWa1c3<<" | "<<RWa1c4<<" | "<<RWa1c5<<endl;
	cout << RWa2c1 <<" | "<<RWa2c2<<" | "<<RWa2c3<<" | "<<RWa2c4<<" | "<<RWa2c5<<endl;
	cout << RWa3c1 <<" | "<<RWa3c2<<" | "<<RWa3c3<<" | "<<RWa3c4<<" | "<<RWa3c5<<endl;
	cout << endl;
	cout << "HASIL AKHIR  :"<<endl;
	cout << "Nilai A1 : "<<ha1<<endl;
	cout << "Nilai A2 : "<<ha2<<endl;
	cout << "Nilai A3 : "<<ha3<<endl;
}
