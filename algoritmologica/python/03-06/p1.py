n = int(input('Insira o comprimento do vetor: '))

vetor = []

for i in range(n):
    vetor.append(input('Digite um número: '))

for i in range(n):
    if vetor.index(vetor[i]) % 2 == 0:
        print(vetor[i])