n = int(input('Digite o comprimento do vetor: '))
vetor = [''] * n

for i in range(n):
    name = input('Digite um nome: ')
    vetor[i] = name

print('Os nomes que estão nas posições ímpares são: ')

for i in range(n):
    if i % 2 == 1:
        print(f'O nome {vetor[i]} esta na posição {i}')
