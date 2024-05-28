n = int(input('Digite o valor de n: '))

vetor = []

for i in range(n):
    vetor.append(int(input('Digite um número: ')))

contador = vetor.count(0)
print(f'{contador} são iguais a 0')