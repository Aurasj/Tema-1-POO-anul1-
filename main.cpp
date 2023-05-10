#include <iostream>
using namespace std;

class Pereche{
public:

 ///constructor
    Pereche() : a(0), b(0) {}
    Pereche(int a, int b) : a(a), b(b) {}
 ///functii getter si setter pentru datele membre
 int getA() const {
    return a;
 }

 void setA(int a){
    a = a;
 }

 int getB() const{
    return b;
 }

 void setB(int b){
    b = b;
 }

private:
 ///datele membre
 int a;
 int b;

};

///supraincarcarea operatorului << pentru clasa Pereche
    ostream& operator<<(ostream& os, Pereche& p) {
    os << "(" << p.getA() << ", " << p.getB() << ")";
    return os;
}
class Rational{
public:
 ///constructor
    Rational() : n(Pereche()) {}
    Rational(int a, int b) : n(Pereche(a, b)) {}
 ///functii getter si setter pentru datele member
    Pereche getN() const { return n; }
    void setN(const Pereche& n) { this->n = n; }
 ///supraincarcarea operatorilor pentru adunare,scadere
 /// inmultire, impartire
    Rational operator+(const Rational& r) const {
        int a = n.getA() * r.getN().getB() + r.getN().getA() * n.getB();
        int b = n.getB() * r.getN().getB();
        return Rational(a, b);
    }

    Rational operator-(const Rational& r) const {
        int a = n.getA() * r.getN().getB() - r.getN().getA() * n.getB();
        int b = n.getB() * r.getN().getB();
        return Rational(a, b);
    }

    Rational operator*(const Rational& r) const {
        int a = n.getA() * r.getN().getA();
        int b = n.getB() * r.getN().getB();
        return Rational(a, b);
    }

    Rational operator/(const Rational& r) const {
        int a = n.getA() / r.getN().getB();
        int b = n.getB() * r.getN().getA();
        return Rational(a, b);
    }

 ///functie pentru simplificare
    Rational simplificare() const {
        int a = n.getA();
        int b = n.getB();
        int divizor = div(a, b);
        if (divizor != 0) {
            a /= divizor;
            b /= divizor;
        }
        return Rational(a, b);
    }
private:
 ///data membra
 Pereche n;

 int div(int a, int b) const {
        if (a == 0)
            return b;
        return div(b % a, a);
    }
};
///supraincarcarea operatorului << pentru clasa Rational
    ostream& operator<<(ostream& os, Rational& r) {
    os << r.getN();
    return os;
}

int main()
{
 Rational p(-2,3), r(2,6), s(1,5), t(-1,4);
 r.simplificare();
 cout << r << endl;
 r = r + s;
 p = p - r;
 t = t*p;
 s = p/r;
 cout << p << endl << r << endl << s << endl << t << endl;
 return 0;
}