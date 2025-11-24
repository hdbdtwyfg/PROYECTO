//
// Created by mauri on 23-11-2025.
//

#ifndef PROYECTO_CTABLERO_H
#define PROYECTO_CTABLERO_H

#include "Definicion.h"
#include "CElementos.h"

class CTablero {
private:
    int tipoTablero;
public:
    CTablero(){}
    CTablero(int _tipo):tipoTablero(_tipo){}
    virtual ~CTablero(){}
    void revisarTablero();
};


#endif //PROYECTO_CTABLERO_H