n = int(input('Digite o número de componentes do vetor: '))
vetor = []

for i in range(n):
    vetor.append(int(input('Digite um número: ')))

print(f'A soma dos componentes do vetor é: {sum(vetor)}')