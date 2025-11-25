//
// Created by mauri on 23-11-2025.
//

#include "CTablero.h"


CTablero::CTablero(int _tipo) {
    tipoTablero = _tipo;
    tableroInterno = 2*_tipo-1;
    crearTablero();
}

void CTablero::crearTablero() {
    for (int i = 0; i < tableroInterno; i++) {
        vector<CElementos*> fila;
        for (int j = 0; j < tableroInterno; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    fila.push_back(new CPunto());
                }else {
                    fila.push_back(new CLinea());
                }
            }else {
                if (j % 2 == 0) {
                    fila.push_back(new CLinea());
                }else {
                    fila.push_back(new CCaja());
                }
            }
        }
        tablero.push_back(fila);
    }
}

CTablero::~CTablero() {
    for (auto& fila: tablero) {
        for (auto& item : fila) {
            delete item;
        }
    }
}

void CTablero::mostrar() {
    cout << "Tablero de " << tipoTablero << "x" << tipoTablero << " (Matriz interna " << tableroInterno << "x" << tableroInterno << "):\n\n";
    for (int i = 0; i < tableroInterno; i++) {
        for (int j = 0; j < tableroInterno; j++) {
            cout << " " << tablero[i][j]->getSimbolo() << " ";
        }
        cout << endl;
    }

}

void CTablero::revisarTablero() {
}

bool CTablero::movimiento(int x1,int y1,int x2,int y2) {
    if (x1>=1 && x2>=1 && y1>=1 && y2>=1 && x1<=tipoTablero && x2<=tipoTablero && y1<=tipoTablero && y2<=tipoTablero) {
        if (x1==x2 && y1==y2) {
            cout<<"XXXXXXXX----Las coordenadas son las mismas----XXXXXXXX"<<endl;
            return false;
        }else if (abs(x1-x2) + abs(y1-y2)!=1) {
            cout<<"XXXXXXXX----Las coordenadas no son adyacentes----XXXXXXXX"<<endl;
            return false;
        }else {
            if (tablero[(x1*2+x2*2)/2-2][(y1*2+y2*2)/2-2]->getSimbolo() == ' ') {
                tablero[(x1*2+x2*2)/2-2][(y1*2+y2*2)/2-2]->visibilidad();
                return true;
            }
        }
    }
    else {
        cout<<"XXXXXXXX----Fuera del rango----XXXXXXXX"<<endl;
        return false;
    }
}
