n = int(input('Digite o número de alunos: '))

for n in range(n): 
    nota1 = int(input(f'Digite a nota 1 do aluno {n+1}: '))
    nota2 = int(input(f'Digite a nota 2 do aluno {n+1}: '))
    faltas = int(input(f'Digite o número de faltas do aluno {n+1}: '))
    media = nota1 + nota2 / 2
    if media >= 6 and faltas < 10:
        print('Aprovado')
    else:
        print('Reprovado')
