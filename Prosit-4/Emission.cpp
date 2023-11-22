#include "Emission.h"
#include "Reception.h"
#include <iostream>
using namespace std;

Emission::Emission() {
	e = NULL;
	strcpy_s(m1.data, "Ici FUN"); m1.freq = 94;
	strcpy_s(m3.data, "radio"); m3.freq = 94;
	strcpy_s(m2.data, "Bonjour vous écoutez 69 FM"); m2.freq = 69;
	strcpy_s(m4.data, "la radio de LYON"); m4.freq = 69;
	list = &m1; m1.next = &m3; m3.next = NULL; list2 = &m2; m2.next = &m4; m4.next = NULL;
}


void Emission::signal() {
	e = &Reception::listen;
	e(list->data);	
}
