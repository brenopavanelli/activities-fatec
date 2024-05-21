# Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.

n = int(input('Digite o número de componentes do vetor: '))
vetor = []

for i in range(n):
    vetor.append(int(input('Digite um número: ')))

vetor.reverse()

print(vetor)
