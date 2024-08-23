'''
Faça um Programa que leia um vetor de N números inteiros (peça para o usuário informar o valor de N), mostre a soma e a multiplicação dos números do vetor.
'''
n = int(input('Digite o número de elementos do vetor: '))
vetor = []

for i in range(n):
    vetor.append(int(input('Digite um número: ')))

soma = sum(vetor)
produto = 1

for num in vetor: 
    produto *= num 

print(soma)
print(produto)