idades = []

for i in range(5):
    idade = int(input(f"Digite a idade da pessoa {i+1}: "))
    idades.append(idade)

idade_mais_alta = max(idades)
idade_mais_baixa = min(idades)

print(f"A idade mais alta é: {idade_mais_alta}")
print(f"A idade mais baixa é: {idade_mais_baixa}")

'''
O algoritmo lê e armazena idades em um vetor, em seguida exibe a idade mais alta e mais baixa
'''