'''
Faça um Programa que peça a idade e a altura de N pessoas (peça o valor de N para o usuário), armazene cada informação no vetor. Imprima a idade e a altura na ordem inversa a ordem lida.
'''
n = int(input('Digite o número de pessoas: '))
idade = []
altura = []

for i in range(n):
    idade.append(int(input(f'Digite a idade da pessoa {i+1}: ')))
    altura.append(float(input(f'Digite a altura da pessoa {i+1}: ')))

idade.reverse()
altura.reverse()
print(idade)
print(altura)