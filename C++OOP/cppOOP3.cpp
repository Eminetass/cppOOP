#include <iostream>
using namespace std;

class Nokta{
	private:
	   int x;
	   int y;
	public:
	
	Nokta();
	Nokta(int,int);
	
	int getX();
	int getY();
	void setX(int);
	void setY(int);
		
    void ekranaYaz();  
	bool baslangictaMi();	
};

Nokta::Nokta(){
	x=2;
	y=5;
}
Nokta::Nokta(int x,int y=8){
	this->x=x,
	this->y=y;
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
void Nokta::setY(int _y){
	y= _y;
}


void Nokta::ekranaYaz(){
	cout<<x<<","<<y<<endl;
}
bool Nokta::baslangictaMi(){
	   return x==0 & y==0;     
}	

int main(int argc, char** argv) {
	Nokta n1;
	Nokta n2(5);
	cout<<n1.getX()<<" "<<n1.getY()<<endl;
	cout<<n2.getX()<<" "<<n2.getY()<<endl;
	
	
	return 0;
}
