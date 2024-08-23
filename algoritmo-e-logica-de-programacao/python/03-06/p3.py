n = int(input('Digite o comprimento do vetor: '))
vetor = [''] * n

for i in range(n):
    name = input('Digite um nome: ')
    vetor[i] = name

for i in range(n):
    if len(vetor[i]) > 5:
        print(vetor[i])