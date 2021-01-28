//figura

#include<iostream>
#include<conio.h>
#include<sstream>
#include<math.h>


using namespace std;


class Figura{
	
protected: 
	int w;
	int h;
	
public: Figura(int w, int h){
	
	this->w=w;   this->h=h;
}	


string toString(){
	
	stringstream s;
	s<<"Figura[ancho: "<<w<<" , alto "<<h<<"]";
	return s.str(); 
	
}


float area(){
	
	return w*h;
}
	
};


class Cuadrado : public Figura{
public:	
	Cuadrado(int l):Figura(l,l){
	cout<<"Yo soy un cuadrado"<<endl;
	
	}

	
	
};

class Rectangulo:public Figura{
public:	
	Rectangulo(int b,int a):Figura(b,a){
		cout<<"Yo soy un resctangulo"<<endl;

	}
	
	
};



class Circulo:public Figura{
public:	
	Circulo(int b,int a):Figura(b,a){
		cout<<"Yo soy un circulo"<<endl;

}
	//overrinding
	float area(){
		return 3.1416*w/2.0*w/2.0;
	}
	
};



int main(){
	
	Cuadrado c(3);
	cout<<c.toString()<<endl;
		cout<<"area: "<<c.area()<<endl;

	
	Rectangulo r(9,9);
	
	cout<<r.toString()<<endl;
			cout<<"area: "<<r.area()<<endl;

		
		
		Circulo ci(3,4);
	
	cout<<ci.toString()<<endl;
			cout<<"area: "<<ci.area()<<endl;

	
	
	
	
}




