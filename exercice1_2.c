#include<stdio.h>

//respostas

//2.a - O compilador emite uma mensagem de advert�ncia e erro no c�digo.

//2.b - O compilador emite essa mensagem por mais de um motivo, a v�riavel do ponteiro p n�o est� recebendo o endere�o da v�riavel x; quando solicitado a sa�da do valor da v�riavel p n�o � usado o indicador de valor inteiro que foi atribu�do a v�riavel; e a solicita��o do valor do ponteiro est� incorreta e recebe como resposta uma v�riavel que n�o existe no c�digo.

//2.c - A execu��o n�o foi bem sucedida.

//2.d - 
int main(void) {
	int x, *p;
	x = 100;
	p = &x;
	printf("Valor de p = %d", *p);
	return 0;
}

//2.e - Primeiramente ocorreu um erro indicando que as aspas usadas dentro da fun��o printf n�o eram as corretas para essa fun��o, corrigi esse erro e o c�digo foi bem executado.
