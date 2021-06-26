import random as rd
from math import log

def MAX( A, n ):
	count = 0
	maximo = A[0]
	i = 2
	while( i < n ):
		if( A[i] > maximo):
			maximo = A[i]
			count += 1
		i += 1
	return count


def Generador(n):
	A = []
	for k in range(n):
		A.append(rd.randint(-n, n))
	return A

lista = [2**k for k in range(8, 21)]

for n in lista:
	contador = 0
	for k in range(200):
		A  = Generador(n)
		contador += MAX(A, n)
	print("n:        ", n)
	print("Promedio: ", contador/200)
	print("ln(n):  ", log(n))
	print()
