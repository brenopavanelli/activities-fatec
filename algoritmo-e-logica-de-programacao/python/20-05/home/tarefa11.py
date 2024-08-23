'''
Faça um Programa que leia um vetor A com N números inteiros (pergunte o valor de N ao usuário), calcule e mostre a somatória dos quadrados dos elementos do vetor.
'''
n = int(input('Digite o número de elementos do vetor: '))
vetor = []

for i in range(n):
    vetor.append(int(input('Digite um número: ')))
    vetor[i] *= vetor[i]

print(sum(vetor))