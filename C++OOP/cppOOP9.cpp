#include <iostream>
using namespace std;
class Nokta{
	private:
		int x;
		int y;
	public:
		int*z;
	const int t;   //const olarak tanýmlanan deðiþmez .	
	Nokta();
	Nokta(int,int,int);
	Nokta(const Nokta&);
	~Nokta();
	
	int getX()const;
	int getY()const;
	void setX(int);
	void setY(int);
	void ekranaYaz();
	bool baslangictaMi();
};
Nokta::Nokta():t(0){     //    :t(0){consta böyle deðer tanmlamasý yapabiliriz.
	x=0;
	y=0;
	z=new int(5);
	//t=0; kullanýmý hatalý olur
	cout<<"parametresiz kurucu calisti "<<x<<" "<<y<<endl;
}

Nokta::Nokta(int x,int y=8,int t=0):t(t){
	this->x=x;
	this->y=y;
//	this->t=t;  kullanýmý hatalý
	z=new int(6);
	cout <<"parametreli kurucu calisti "<<x<<" "<<y<<endl;
}
Nokta::Nokta(const Nokta& n):t(n.t){
	x=n.x;
	y=n.y;
	z=new int(*n.z);
	cout<<"kopyalama kueucusu "<<x<<" "<<y<<endl;
}
Nokta::~Nokta(){
	cout<<"yikici calisti "<<endl;
	delete z;
}
int Nokta::getX()const{
	return x;
}
int Nokta::getY()const{
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
	Nokta n1(1,10,10);
	Nokta n2(n1);
	Nokta n3=n1;
	
	return 0;
}
