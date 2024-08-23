n = int(input('Insira o comprimento do vetor: '))

vetor = []

for i in range(n):
    vetor.append(input('Digite um nome: '))

for i in range(n):
    if len(vetor[i]) % 2 == 0:
        print(vetor[i])