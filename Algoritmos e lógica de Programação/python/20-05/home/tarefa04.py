# Faça um Programa que leia um vetor de 10 caracteres, e diga quantas vogais foram lidas. Imprima as vogais.
vetor = []
vetor_vogal = []
vogais = ['a','e','i','o','u']
contador = 0

for i in range(10):
    vetor.append(input('Digite um caractere: '))
    if vetor[i] in vogais:
        contador += 1
        vetor_vogal.append(vetor[i])

print(f'O número de vogais presentes no vetor é: {contador}')
print(vetor_vogal)