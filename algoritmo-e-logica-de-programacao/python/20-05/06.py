n = int(input('Digite a quantidade de números inteiros: '))
vetor_positivo = []
vetor_negativo = []

for i in range(n):
    valor = int(input('Digite um valor: '))
    if valor >= 0: 
        vetor_positivo.append(valor)
    else: 
        vetor_negativo.append(valor)

print(f'Vetor positivo: {vetor_positivo}')
print(f'Vetor negativo: {vetor_negativo}')