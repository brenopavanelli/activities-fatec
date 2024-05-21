'''
Faça um Programa que leia em um vetor a nota de N alunos (pergunte o valor de N ao usuário), depois, mostre o índice do vetor das notas maiores ou iguais que 6 e em seguida, mostre o índice do vetor das notas menores que 6.
'''
n = int(input('Digite o número de alunos: '))
notas = []

for i in range(n):
    notas.append(int(input(f'Digite a nota do aluno {i+1}: ')))

print('Índice das notas maiores que 6: ')
for i in range(n):
    if notas[i] >= 6: 
        print(notas.index(notas[i]))

print('Índice das notas menores que 6: ')
for i in range(n):
    if notas[i] < 6: 
        print(notas.index(notas[i]))
