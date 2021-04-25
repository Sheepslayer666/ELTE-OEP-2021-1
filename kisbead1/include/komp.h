//
//  komp.h
//  I. OEP kisbeadando
//  PREEZ1
//  Created by Horvath Matyas on 2021. 02. 20..
//
//Ez a Header file a komplex szamokhoz

#ifndef komp_h
#define komp_h
#include<iostream>

class komp{
    public:
//public konstruktorok
    komp();
    komp(float);
    komp(float, float);
//setter
    void setnemval(float);
    void setval(float);
//getter
        float getval();
        float getnemval();

//komplex operatorok
        komp operator + (komp &k);
        komp operator - (komp &k);
        komp operator * (komp &k);
        komp operator / (komp &k);

//baratsagok
//
        friend std::ostream & operator<<(std::ostream &out, komp &k);
        friend std::istream & operator>>(std::istream &in, komp &k);

protected:
//privat flaot valtozok
private:
    float val;
    float nemval;
};

#endif
//ENDFILE
