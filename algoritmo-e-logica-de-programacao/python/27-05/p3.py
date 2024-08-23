from traceback import print_tb


n = int(input('Digite o número de componentes do vetor: '))
vetor = [] 

for i in range(n):
    vetor.append(int(input('Digite um componente do vetor: ')))

for j in range(n):
    if j % 2 == 0:
        print(vetor[j])