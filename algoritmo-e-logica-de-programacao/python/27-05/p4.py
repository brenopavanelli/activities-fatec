n = int(input('Insira o comprimento do vetor: '))

vetor = []

for i in range(n):
    vetor.append(input('Digite um nome: '))

for i in range(n):
    print(f'O nome {vetor[i]} tem {len(vetor[i])} letras')