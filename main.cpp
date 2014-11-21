// queue::push/pop
#include "Evaluador.h"
#include <iostream>
#include "tinyxml2.h"
#include <iostream>
#include <list>
using namespace std;
using namespace tinyxml2;

//Fuente del XML:
//http://openweathermap.org/current

//Sugerencia: investigar sobre la funcion atof para convertir string a float

//Dado el formato xml en el ejemplo clima.xml realizar los siguientes ejercicios:
//Devuelve el attributo value del tag temperature
float getTemperature(string nombre_archivo)
{
    return -1.0;
}

//Devuelve el attributo value del tag humidity
int getHumidity(string nombre_archivo)
{
    return -1;
}

//Devuelve el attributo value del tag pressure
int getPressure(string nombre_archivo)
{
    return -1;
}

//Devuelve el attributo value del tag speed dentro del tag wind
float getWindSpeed(string nombre_archivo)
{
    return -1.0;
}

//Devuelve el attributo name del tag city
string getCityName(string nombre_archivo)
{
    return "";
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
