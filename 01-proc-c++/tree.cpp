//------------------------------------------------------------------------------
// tree.cpp - содержит функции обработки дерева
//------------------------------------------------------------------------------

#include <string>

#include "tree.h"

//------------------------------------------------------------------------------
// Ввод параметров дерева из потока
void In(tree &t, ifstream &ifst) {
    ifst >> t.number;
}

// Случайный ввод параметров дерева
void InRnd(tree &t) {
    t.number = 123; 
}

//------------------------------------------------------------------------------
// Вывод параметров дерева в поток
void Out(tree &t, ofstream &ofst) {
    ofst << "number = " << t.number;
}
