#include <iostream>
using namespace std;

int main(){
		cout<<"--------------------"<<endl;
	cout<<"A or B"<<endl;
	cout<<" 0 || 0 = "<< (0 || 0) << endl;
	cout<<" 0 || 0 = "<< (0 || 0) << endl;
	cout<<" 0 || 1 = "<< (0 || 1) << endl;
	cout<<" 0 || 1 = "<< (0 || 1) << endl;
	cout<<" 1 || 0 = "<< (1 || 0) << endl;
	cout<<" 1 || 0 = "<< (1 || 0) << endl;
	cout<<" 1 || 1 = "<< (1 || 1) << endl;
	cout<<" 1 || 1 = "<< (1 || 1) << endl<<endl;
	
		cout<<"--------------------"<<endl;
	
	
	cout<<"A or C"<<endl;
	cout<<" 0 || 0 = "<< (0 || 0) << endl;
	cout<<" 0 || 1 = "<< (0 || 1) << endl;
	cout<<" 0 || 0 = "<< (0 || 0) << endl;
	cout<<" 0 || 1 = "<< (0 || 1) << endl;
	cout<<" 1 || 0 = "<< (1 || 0) << endl;
	cout<<" 1 || 1 = "<< (1 || 1) << endl;
	cout<<" 1 || 0 = "<< (1 || 0) << endl;
	cout<<" 1 || 1 = "<< (1 || 1) << endl<<endl;
	
		cout<<"--------------------"<<endl;
	
	
	cout<<"F1 = (A or B) and (A or C)"<<endl;
	cout<<" 0 && 0 = "<< (0 && 1) << endl;
	cout<<" 0 && 1 = "<< (0 && 1) << endl;
	cout<<" 1 && 0 = "<< (1 && 0) << endl;
	cout<<" 1 && 1 = "<< (1 && 1) << endl<<endl;
	
	return 0;
}
