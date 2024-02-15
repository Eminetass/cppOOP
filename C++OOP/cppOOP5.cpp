#include <iostream>
using namespace std;

class A{
	private:
	int x;
	public:
	   int getX();
	   void setX(int);
	friend ostream& operator <<(ostream&,A&);   	
};

int A::getX(){ return x;}
void A::setX(int _x){ x=_x;}

o	o<<"A sinifindaki x= " <<a.x;
	return o;
}
int main(int argc, char** argv) {
	A a;
	a.setX(5);
	cout<<a ;
	
	return 0;
}stream& operator <<(ostream& o,A&a){

