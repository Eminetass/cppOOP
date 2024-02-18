#include <iostream>
using namespace std;
//destructer 
class Nokta{
	private:
		int x;
		int y;
		int*z;
	public:
	
//	const int t;   //const olarak tanýmlanan deðiþmez .	
	Nokta();
	Nokta(int,int);
	~Nokta();
	
	int getX();
	int getY();
	void setX(int);
	void setY(int);
	void ekranaYaz();
	bool baslangictaMi();
};
Nokta::Nokta(){     //    :t(0){consta böyle deðer tanmlamasý yapabiliriz.
	x=0;
	y=0;
	z=new int(5);
	//t=0; kullanýmý hatalý olur
	cout<<"parametresiz kurucu calisti "<<x<<" "<<y<<endl;
}

Nokta::Nokta(int x,int y=8){
	this->x=x;
	this->y=y;
	z=new int(6);
	cout <<"parametreli kurucu calisti"<<x<<" "<<y<<endl;
}
Nokta::~Nokta(){
	cout<<"yikici calisti"<<endl;
	delete z;
}
int Nokta::getX(){
	return x;
}
int Nokta::getY(){
	return y;
}
void Nokta::setX(int x){
	this->x=x;
}
void Nokta::setY(int y){
	this->y=y;
}
void Nokta::ekranaYaz(){
	cout<<x<<","<<y<<endl;
}
bool Nokta::baslangictaMi(){
	return x==0 && y==0;
}

int main(int argc, char** argv) {
	
	Nokta n;
	Nokta n2;
	n.setX(5);
	n.setY(6);
	cout<<n.getX()<<" "<<n.getY()<<endl;
	

	
	return 0;
}
