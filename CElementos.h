//
// Created by Emiliano on 21/11/2025.
//

#ifndef PROYECTO_CELEMENTOS_H
#define PROYECTO_CELEMENTOS_H

#include "Definicion.h"
#include "CCaja.h"
#include "CLinea.h"
#include "CPunto.h"
#include <vector>

class CElementos {
protected:
    vector<CElementos*> tablero;
public:
    virtual ~CElementos(){}
    virtual void dibujar() const = 0;
};


#endif //PROYECTO_CELEMENTOS_H