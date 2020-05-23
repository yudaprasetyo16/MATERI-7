#include<iostream>
using namespace std;
struct mahasiswa{
	string nama;
	int usia;
	float ipk;
	string hobi[2];
};

int main()
{
	mahasiswa mhs [2];
	
	mhs[0].nama	="Yuliwan";
	mhs[0].usia	= 20;
	mhs[0].ipk	= 3.5;
	mhs[0].hobi[0]	="Rebahan";
	mhs[0].hobi[1]	= "ngegame";
	
	mhs[1].nama	="Dodit";
	mhs[1].usia	= 20;
	mhs[1].ipk	= 3.8;
	mhs[1].hobi[0]	="Toxic";
	mhs[1].hobi[1]	="Futsal";
	
	cout<<mhs[0].nama<<endl;
	cout<<mhs[0].usia<<endl;
	cout<<mhs[0].ipk<<endl;
	cout<<mhs[0].hobi[0]<<endl;
	cout<<mhs[0].hobi[1]<<endl;
	
	cout<<"====================="<<endl;
	
	cout<<mhs[1].nama<<endl;
	cout<<mhs[1].usia<<endl;
	cout<<mhs[1].ipk<<endl;
	cout<<mhs[1].hobi[0]<<endl;
	cout<<mhs[1].hobi[1]<<endl;
	
	
	return 0;
	
	
}
