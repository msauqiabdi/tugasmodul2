#include <iostream>

using namespace std;

int main()
{
	double lr =42;
	double lp = 193*1215;
	double l_1_box =lp*8/1000000;
	double Jbp,bp,bpg,Ttlbyr;
	
	cout <<" Luas Rumah :"<<lr<<"m2"<<endl;
	cout <<" Luas 1 Box Parket : "<<l_1_box<<"m2"<<endl;
	
	Jbp = lr/l_1_box;
	cout <<" Jumlah Box Parket :"<<bp<<endl;
	
	bp = Jbp*500;
	cout <<" Biaya Parket (RP) :"<<bp<<endl;
	
	bp = lr*20;
	cout <<" Biasa Pasang (RP) :"<<bp<<endl;
	
	Ttlbyr =bp+bpg;
	cout <<" Total Biaya (RP) :"<<Ttlbyr<<endl;
	cout <<" Muhammad Sauqi Abdi ";
	cout <<" 16.63.0317 ";
	
}
