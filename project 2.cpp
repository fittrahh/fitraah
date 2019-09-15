#include <iostream>
using namespace std;

class siswa{
	public:
		int noInduk;
		void showInduk(){
			cout<<"No Induk = "<<noInduk<<endl;
		}
};

int main() {
	siswa budi{1};
	budi.showInduk();
	
	siswa &refBudi = budi;
	refBudi.noInduk = 2;
	budi.showInduk();
	
	siswa *pBudi = &budi;
	pBudi->noInduk = 3;
	budi.showInduk();
	int a = 5;

	return 0;
}
