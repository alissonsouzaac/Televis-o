#include "Televisao.h"
#include <string>
#include <iostream>
using namespace std;

Televisao::Televisao(){
	volume=0;
	canal=0;
}
void Televisao::setVolume(int v){
	if(volume < 0){
		volume = 0;
	}else if(volume > 100){
		volume = 100;
	}else{
		volume = v;
	}
}
int Televisao::getVolume(){
	return volume;
}
void Televisao::setCanal(int c){
	if(canal < 0){
		canal = 0;
	}else if(canal > 100){
		canal = 100;
	}else{
		canal = c;
	}
}
int Televisao::getCanal(){
	return canal;
}
int Televisao::aumentarVolume(){
	setVolume(getVolume()+1);
	return getVolume();
}
int Televisao::diminuirVolume(){
	setVolume(getVolume()-1);
	return getVolume();
}
int Televisao::aumentarCanal(){
	setCanal(getCanal()+1);
	return getCanal();
}
int Televisao::diminuirCanal(){
	setCanal(getCanal()-1);
	return getCanal();
}
int Televisao::alterarCanal(int canal){
	setCanal(canal);
	return getCanal();
}
