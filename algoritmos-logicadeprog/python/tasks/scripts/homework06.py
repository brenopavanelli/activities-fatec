# Escreva um programa que solicite ao usuário um valor inicial, uma taxa de juros anual e o número de anos. 

valor_inicial = float(input('Digite o valor inicial: '))
juros = float(input('Digite a taxa de juros (valor decimal): '))
anos = int(input('Digite o número de anos: '))
valor_final = valor_inicial * (1 + juros)**anos
print(f'O valor final será de: {round(valor_final, 2)}')