# Faça um Programa que leia N números inteiros (pergunte para o usuário o valor de N) e armazene-os num vetor.

n = int(input('Digite o número de inteiros do vetor: '))
vetor = []

for i in range(n):
    vetor.append(int(input('Digite o número: ')))

print(vetor)