#include <string>
#ifndef RELOGIO_H
#define RELOGIO_H


class Televisao
{
    private:
	int volume;
	int canal;

public:
	Televisao();
	void setVolume(int volume);
	int getVolume();
	void setCanal(int canal);
	int getCanal();
	int aumentarVolume();
	int diminuirVolume();
	int aumentarCanal();
	int diminuirCanal();
	int alterarCanal(int canal);

};

#endif // RELOGIO_H
