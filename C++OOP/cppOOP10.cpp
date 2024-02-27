#include <iostream>
using namespace std;
#include "Nokta.h"
int Nokta::i=0;

int main(int argc, char** argv) {
	
//	Nokta n(2,2);
//	cout<<n<<endl;
//	Nokta n1(n);
//	cout<<n1;
	Nokta n1(1,10,10);
	Nokta n2(n1);
	cout<<Nokta::i<<endl;
	{
		//cout<<Nokta::i<<endl;
        cout<<n1.getI()<<endl;
        cout<<n2.getI()<<endl;
		Nokta n3;
		cout<<n1.getI()<<endl;
		cout<<n2.getI()<<endl
		//cout<<Nokta::i<<endl;
    }
//	cout<<Nokta::i<<endl;
	
	return 0;
}
