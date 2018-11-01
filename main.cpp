#include <iostream>
#include <conio.h>
using namespace std;
class complex1
{
private:
    double real,imag ;
public:

    void get()
    {

        cout <<"enter real and imaginary numbers \n";
        cin>>real>>imag;

    }
    void display()
    {

        cout<<"the complex number = "<<real<<"+"<<imag<<"i"<<endl;

    }
    complex1 operator +(complex1 x )//function to addition two complex numbers
    {

        complex1 sum;
        sum.real=real+x.real;
        sum.imag=imag+x.imag;
        return sum;
    }

    complex1 operator -(complex1 x )//function to subtraction two complex numbers
    {

        complex1 sub;
        sub.real=real-x.real;
        sub.imag=imag-x.imag;
        return sub;
    }

    complex1 operator *(complex1 x )// (a*c  – b*d) + (a*d + b*c)*i
    //function to multiply two complex numbers
    {

        int a,b,c,d;
        a=real;
        b=imag;
        c=x.real;
        d=x.imag;
        int v1,v2,v3,v4;
        v1=a*c;
        v2=-1*(b*d);
        v3=a*d;
        v4=b*c;
        x.real=v1+v2;
        x.imag=v3+v4;

        return x;
    }
};

int main()
{

    complex1 a,b,c;
    a.get();
    b.get();
    cout<<"sum of two complex numbers \n";
    c=a+b;
    c.display();
    cout<<endl;
    cout<<"sub of two complex numbers \n";
    c=a-b;
    c.display();
    cout<<endl;
    cout<<"multiply of two complex numbers \n";
    c=a*b;
    c.display();



     return 0;
}
