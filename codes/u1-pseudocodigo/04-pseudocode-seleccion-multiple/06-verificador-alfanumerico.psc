Algoritmo casos_similares
	
	Definir opcion1 Como Caracter
	
	Leer opcion1
	Segun opcion1 Hacer
		'/','*', '+', '-':
			Escribir "Ud ingres� un operador matem�tico"
		'0','1', '2', '3','4','5', '6', '7','8','9':
			Escribir "Ud ingres� un digito"
		De Otro Modo:
			Escribir "Ud ingres� un caracter no valido"
	Fin Segun
FinAlgoritmo
