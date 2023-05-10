# Tema-1-POO-anul1-
 

Programarea calculatoarelor şi limbaje de 
programare II

Tema 1

Termen de predare: săptămâna 10 – 14 aprilie 2023

Punctaj: ETTI:15% din nota finală / CALC: 10% din nota finală

Compunerea claselor. Scrieți o aplicație C++ care implementează operații cu 
numere raționale. Clasa Pereche definește o pereche de numere întregi, iar clasa 
Rational are ca dată membră un obiect din clasa Pereche și implementează 
adunarea, scăderea, înmulțirea, împărțirea și simplificarea numerelor raționale
Atributele celor două clase sunt următoarele:

Pereche
int a
int b
Rational
Pereche n
Întrucât clasa Rational conţine ca şi membru un obiect al clasei Pereche, 
acest lucru înseamnă că folosim compunerea claselor.
Setul minimal de funcționalități al fiecăreia dintre clasele Pereche şi Rational
Sfera constă din:
- Unul sau mai mulți constructori;
- Funcții getter și setter pentru toate datele membre ale clasei;
- Operatorul << supraîncărcat.
Suplimentar, clasa Rational va supraîncărca operatori pentru adunare, 
scădere, înmulțire și împărțire și o funcție pentru simplificare prin care fracția este 
adusă la forma ireductibilă.

Implementare și test. Completați programul de mai jos astfel încât funcţia main
să ruleze fără nicio modificare din partea voastră:

#include <iostream>
using namespace std;
class Pereche{
public:
 ///constructor
 ///functii getter si setter pentru datele membre
private:
 ///datele membre
};
///supraincarcarea operatorului << pentru clasa Pereche
2
class Rational{
public:
 ///constructor
 ///functii getter si setter pentru datele member
 ///supraincarcarea operatorilor pentru adunare,scadere
 /// inmultire, impartire
 ///functie pentru simplificare
private:
 ///data membra
};
///supraincarcarea operatorului << pentru clasa Rational
int main()
{
 Rational p(-2,3), r(2,6), s(1,5), t(-1,4);
 r.simplificare();
 cout << r << endl;
 r = r + s;
 p = p – r;
 t = t*p;
 s = p/r;
 cout << p << endl << r << endl << s << endl << t << endl;
 return 0;
}