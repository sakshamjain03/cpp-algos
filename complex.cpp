/*Consider 2 complex numbers 2+3i and 5+8i 
1) add them and display the result
2)Convert them to polar form
3) Then multiply them  */

#include <iostream>
#include<cmath>
using namespace std;

class complex
{
        int real,img;
    public:
        void read();
        void display();
        complex add(complex);
        complex polar(complex);
        complex mult(complex);
};

int main()
{   complex c1,c2,sum,p1,p2,multi;
     cout<<"Enter complex number 1"<<endl;
    c1.read();
    cout<<"Enter complex number 1"<<endl;
    c2.read();
    
    cout<<"Complex no. 1 is"<<endl;
    c1.display();
    cout<<"Complex no. 2 is"<<endl;
    c2.display();
    
    cout<<"Polar form of complex number 1 is:"<<endl;
    p1.polar(c1);
    cout<<"Polar form of complex number 2 is:"<<endl;
    p2.polar(c2);
    
    sum=c1.add(c2);
    cout<<"Sum is:";
    sum.display();
    
    multi=c1.mult(c2);
    cout<<"Multiplication is:";
    multi.display();
    
    return 0;
}
complex complex::polar(complex C){
    complex c;
    cout<<"Magnitude"<<sqrt((c.real)*(c.real)+(c.img)*(c.img))<<endl;
    cout<<"Angle"<<atan(c.img/c.real)<<endl;
    return c;
}

complex complex::add(complex C)
{
    complex S;
    S.real=real+C.real;
    S.img=img+C.img;
    return S;
}

complex complex::mult(complex C)
{
    complex S;
    S.real=real*C.real-img*C.img;
    S.img=real*C.img+img*C.real;
    return S;
}

void complex::read()
{
    cin>>real>>img;
}


void complex::display()
{
    if(img>0)
        cout<<real<<"+"<<img<<"i"<<endl;
    else
        cout<<real<<"-"<<img<<"i"<<endl;
}
