# Faça um Programa que leia um vetor de 5 números inteiros e depois mostre-os.

n = int(input('Digite o número de inteiros do vetor: '))
vetor = []

for i in range(n):
    vetor.append(int(input('Digite o número: ')))

print(vetor)