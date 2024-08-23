'''
Faça um Programa que leia dois vetores com N elementos cada (pergunte o valor de N para o usuário). Gere um terceiro vetor de 2*N elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.
'''
n = int(input('Digite o número de elementos dos vetores: '))
vetor1 = []
vetor2 = []
vetor_intercalado = []

for i in range(n):
    vetor1.append(int(input('Digite um número: ')))
    vetor2.append(int(input('Digite outro número: ')))
    vetor_intercalado.append(vetor1[i])
    vetor_intercalado.append(vetor2[i])

print(vetor_intercalado)