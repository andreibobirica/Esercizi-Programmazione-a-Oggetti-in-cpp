//file Lib_UNO.h
namespace SPAZIO_UNO{
    struct Complex{/*...*/};
    void f(Complex c){/*...*/};
};

//file Lib_DUE.h
namespace SPAZIO_DUE{
    struct Complex{/*...*/};
    void g(Complex c){/*...*/};
};

//file main.cpp
#include <iostream>
using namespace std;//SI CERCA DI NON USARE COSì
//usare invece
using std::coud;
using std::endl;

#include "Lib_UNO.h"
#include "Lib_DUE.h"


namespace UNO = SPAZIO_UNO;
namespace DUE = SPAZIO_DUE;

void funzione(){
    SPAZIO_UNO::Complex var1; SPAZIO_UNO::f(var1);
    DUE::Complex var2; DUE::g(var2);
}