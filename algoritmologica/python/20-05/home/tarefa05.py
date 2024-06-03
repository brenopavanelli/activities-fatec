# Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.

vetor = []
vetor_consoante = []
consoantes = 'bcdfghjklmnpqrstvwxyz'
contador = 0

for i in range(10):
    vetor.append(input('Digite um caractere: '))
    if vetor[i] in consoantes:
        contador += 1
        vetor_consoante.append(vetor[i])

        

print(f'O número de vogais presentes no vetor é: {contador}')
print(vetor_consoante)