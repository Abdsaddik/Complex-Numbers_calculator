#include"complex.hpp"
#include<cmath>

complex::complex(double re, double im) : re{re}, im{im} {}

void complex::setRe(double re){
    this->re = re;
}

void complex::setIm(double im){
    this->im = im;
}

double complex::getRe() const{
    return re;
}
double complex::getIm() const{
    return im;
}

double complex::getAbs() const{
    return sqrt(pow(re,2) + pow(im,2));
}

double complex::getArgRad() const{
    return atan(im/re);
}

double complex::getArg() const{
    
    return getArgRad()*(180/3.14159);
}

complex conj(const complex& c){
    return complex{c.re, c.im * (-1)};
}

complex polar(double mag, double arg){
    return complex{mag*cos(arg), mag*sin(arg)};
}

complex& complex::operator=(const complex& rhs){
    if(this != &rhs){
        re = rhs.re;
        im = rhs.im;
    }
    return *this;
}

complex operator+(const complex& lhs, const complex& rhs){
    return complex(lhs.re + rhs.re, lhs.im + rhs.im);
}

complex operator-(const complex& lhs, const complex& rhs){
    return complex(lhs.re - rhs.re, lhs.im - rhs.im);
}

complex operator*(const complex& lhs, const complex& rhs){
    return complex{lhs.re*rhs.re - lhs.im*rhs.im, lhs.re*rhs.im + lhs.im*rhs.re};
}

complex operator/(const complex& lhs, const complex& rhs){
    complex dnmtr = rhs * conj(rhs);
    double dn = dnmtr.im + dnmtr.re;
    complex nmrtr = lhs * conj(rhs);
    nmrtr.re = nmrtr.re/dn;
    nmrtr.im = nmrtr.im/dn;
    return nmrtr;
}

bool operator==(const complex& lhs, const complex& rhs){
    return (lhs.re == rhs.re) && (lhs.im == rhs.im);
}

std::ostream& operator<<(std::ostream& lhs, const complex& rhs){
    return lhs << rhs.re << " + "  << rhs.im << "i\n";
}
