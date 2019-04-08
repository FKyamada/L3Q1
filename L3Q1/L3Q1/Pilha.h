#pragma once
#include "No.h"
class Pilha
{
	No* primeiro, *ultimo;
public:
	//Construtor
	Pilha(); //cria  vazia
			 //M�todos de Acesso
	No*getPrimeiro(); //retorna o primeiro n� da Pilha
	void setPrimeiro(No* novoNo); //torna "novoNo" o primeiro n� da Pilha
	//M�todos
	bool isEmpty(); //retorna verdadeiro se a lista � uma fila vazia
	void push(int elem); //colocar o elemento na pilha
	No* pop(); //retira um elemento da pilha (desempilha)
	bool existe(int elem); //verifica se elem existe
	void top(); //apresenta o elemento presente no topo
	void imprime(); //imprime todos os elementos
	void sair();
	//Destrutor
	~Pilha(); //Destroi todos os n�s da Fila
};
