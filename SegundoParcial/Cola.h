// Cola.h
// Definicion del TDA Cola

#ifndef _COLA_H
#define _COLA_H

typedef int Tipo;		//definir tipo de datos del TDA
#define EXT 20			//Cantidad máxima de elementos del TDA

class Cola{				//definicion del TDA
private:				//declaracion de atributos
	Tipo vec[EXT];		//declaracion del atributo contenedor de datos
	int frente;			//declarar el atributo que contiene posicion del elemento a extraer
	int final;			//declaracion del atributo que contiene la posicion del elemento a insertar

protected:
	void setVec(Tipo v, int pos);	//declaracion del metodo que actualiza el estado de un elemento del TDA
	void setFrente(int v);			//declaracion del metodo que actualiza el estado del atributo
	void setFinal(int v);			//declaracion del metodo que actualiza el estado del atributo
	Tipo getVec(int pos);			//declaracion del metodo que devuelve el estado de un elemento del TDA
	int getFrente();				//declaracion del metodo que devuelve el estado del atributo
	int getFinal();					//declaracion del metodo que devuelve el estado del atributo
public:					//metodos
	Cola();				//constructor
	void borrarCola();				//declaracion del metodo que reinicializa el TDA
	bool colaVacia();				//declaracion del metodo que determina si el TDA carece de elementos
	bool colaLlena();				//declaracion del metodo que determina si el TDA no posee espacios disponibles para nuevos elementos
	int tamanioCola();				//declaracion del metodo que determina la cantidad de elementos contenidos en el TDA
	Tipo quitar();					//declaracion del metodo que permite extraer un elemento del TDA
	void insertar(Tipo v);			//declaracion del metodo que inserta un elemento nuevo en el TDA
	Tipo frenteCola();				//declaracion del metodo que devuelve el valor contenido en la posicion frente
};

Cola::Cola(){						//constructor
	setFinal(-1);					//indicador de carencia de elementos
	setFrente(0);					//indicador de posicion del primer elemento a extraer del TDA
}

void Cola::setVec(Tipo v, int pos){	//metodo que actualiza el estado de un elemento del TDA
	vec[pos] = v;					//almacena el valor v en la posicion pos
}

void Cola::setFrente(int v){		//metodo que actualiza el estado del atributo
	frente = v;						//almacena el valor v en atributo
}

void Cola::setFinal(int v){			//metodo que actualiza el estado del atributo
	final = v;						//almacena el valor v en atributo
}

Tipo Cola::getVec(int pos){			//metodo que devuelve el estado de un elemento del TDA
	return vec[pos];				//devuelve valor contenido por el TDA en la posicion pos
}

int Cola::getFrente(){				//metodo que devuelve el estado del atributo
	return frente;					//devuelve valor contenido en el atributo
}

int Cola::getFinal(){				//metodo que devuelve el estado del atributo
	return final;					//devuelve valor contenido en el atributo
}

void Cola::borrarCola(){			//metodo que reinicializa el TDA
	setFinal(-1);					//indicador de carencia de elementos
	setFrente(0);					//indicador de posicion del primer elemento a extraer del TDA
}

bool Cola::colaVacia(){					//metodo que determina si el TDA carece de elementos
	return (getFinal() < getFrente());	//verifica que atributo final este situado antes del atributo frente
}

bool Cola::colaLlena(){					//metodo que determina si el TDA no posee espacios disponibles para nuevos elementos
	return (getFinal() == (EXT-1));		//verifica que atributo final este situado en el ultimo espacio disponible del TDA
}

int Cola::tamanioCola(){				//declaracion del metodo que determina la cantidad de elementos contenidos en el TDA
	return (getFinal() - getFrente() + 1);	//calcula la cantidad de elementos del TDA
}

Tipo Cola::quitar(){					//metodo que permite extraer un elemento del TDA
	Tipo aux;							//var que contiene el valor a extraer del TDA
	if (!colaVacia()){
		aux = getVec(getFrente());		//copiar el contenido del vector vec posicion frente en aux
		setFrente(getFrente()+1);		//modifica el atributo frente para que se refiera al siguiente valor dentro del TDA
	}
	return aux;							//devolver respuesta
}

void Cola::insertar(Tipo v){			//metodo que inserta un elemento nuevo en el TDA
	if (!colaLlena()){					//aun hay espacio disponible en el TDA
		setFinal(getFinal()+1);			//incrementa la ubicacion del atributo final
		setVec(v, getFinal());			//almacena el nuevo valor en la posicion referida por final
	}
}

Tipo Cola::frenteCola(){				//metodo que devuelve el valor contenido en la posicion frente
	Tipo aux;							//var que contiene el valor a extraer del TDA
	if (!colaVacia()){
		aux = getVec(getFrente());		//copiar el contenido del vector vec posicion frente en aux
	}
	return aux;							//devolver respuesta
}

#endif
