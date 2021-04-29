#pragma once

#include<iostream>


class complex
{
private:
    double re;
    double im;
public:
    // implicit addition is intended here 
    complex(double re = 0, double im = 0);
    void setRe(double re);
    void setIm(double im);
    double getRe() const;
    double getIm() const;
    
    double getAbs() const;
    double getArgRad() const;
    double getArg() const;
    complex& operator=(const complex& rhs);
    friend complex conj(const complex& c);
    friend complex operator+(const complex& lhs, const complex& rhs);
    friend complex operator-(const complex& lhs, const complex& rhs);
    friend complex operator*(const complex& lhs, const complex& rhs);
    friend complex operator/(const complex& lhs, const complex& rhs);
    friend bool operator==(const complex& lhs, const complex& rhs);
    friend std::ostream& operator<<(std::ostream& lhs, const complex& rhs);
};

complex polar(double mag, double arg);
