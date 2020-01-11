#pragma once
#include <iostream>

class Complex_number
{
private:
        double r;
        double phi;
public:
        Complex_number();//конструктор по умолчанию
        Complex_number(double r, double phi);//конструктор
        Complex_number(const Complex_number &complex);
        ~Complex_number();
        //getters и setters
        double get_module() const;
        double get_angle() const;
        static Complex_number sum(const Complex_number &,const Complex_number &);
        Complex_number operator+(const Complex_number &);
        static Complex_number sub(const Complex_number &,const Complex_number &);
        Complex_number operator-(const Complex_number &);
        static Complex_number mul(const Complex_number &,const Complex_number &);
        Complex_number operator*(const Complex_number &);
        static Complex_number div(const Complex_number &,const Complex_number &);
        Complex_number operator/(const Complex_number &);
        static bool equ(const Complex_number &,const Complex_number &);//сравнение
        bool operator==(const Complex_number &);
        static bool equ_rational(const Complex_number &,const Complex_number &);//сравнение по действительной части
        Complex_number conj() const;
        void print(std::ostream& out) const;
        void read(std::istream& in);
};

Complex_number operator ""_Complex (long double first);
std::istream& operator>> (std::istream&, Complex_number&);
std::ostream& operator<< (std::ostream&, const Complex_number&);
