Algoritmo opciones_de_operaciones
	Definir op, cantidad, i como Entero
	op <- 0
	
	Repetir
		Escribir "Seleccione una opci�n de menu:"
		Escribir "(1) Generar n�meros consecutivos a partir del 1"
		Escribir "(2) Salir"
		Leer op
		Segun op Hacer
			1:
				Escribir "Cantidad de consecutivos a partir de 1: "
				Leer cantidad
				i <- 1
				Repetir
					Escribir i
					i <- i + 1
				Mientras Que i <= cantidad
			2:
				Escribir "Termina sesi�n"
			De Otro Modo:
				Escribir "Opci�n inv�lida"
		Fin Segun
	Hasta Que op == 2
	
FinAlgoritmo

