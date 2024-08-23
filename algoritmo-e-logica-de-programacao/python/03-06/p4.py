n = int(input('Digite o comprimento do vetor: '))
vetor = [''] * n
soma = 0

for i in range(n):
    num = float(input('Digite um número: '))
    vetor[i] = num

for i in range(n):
    soma += vetor[i]

print(soma)