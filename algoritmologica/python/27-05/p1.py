n = int(input('Digite o número de componentes do vetor: '))

vetor = []

for i in range(n):
    vetor.append(int(input('Insira um número')))

for j in range(n):
    print(f'elemento {vetor[j]} na posição {vetor.index(vetor[j])}')