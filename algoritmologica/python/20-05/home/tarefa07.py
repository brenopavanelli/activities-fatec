# Faça um Programa que leia em um vetor a nota de N alunos (pergunte o valor de N ao usuário), calcule a média.
n = int(input('Digite o número de alunos: '))
notas = []

for i in range(n):
    notas.append(int(input(f'Digite a nota do aluno {i+1}: ')))

media = sum(notas) / len(notas)

print(media)