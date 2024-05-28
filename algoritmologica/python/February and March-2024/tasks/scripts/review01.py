# Soma de dois número 
n1 = int(input('Digite um número: '))
n2 = int(input('Digite outro número: '))
print(f'A soma é {n1 + n2}')

# Média de 3 notas 
nota1 = float(input('Digite a sua nota 1: '))
nota2 = float(input('Digite a sua nota 2: '))
nota3 = float(input('Digite a sua nota 3: '))
print(f'A média é {(nota1 + nota2 + nota3) / 3}')

# Celsius para Fahrenheit
c = int(input('Digite a temperatura atual em Celsius: '))
print(f'A temperatura em Fahrenheit é de: {(c * 9 / 5) + 32}')

# Área de um retângulo
largura = int(input('Digite a largura do triângulo: '))
altura = int(input('Digite a altura do triângulo: '))
print(f'A área do triângulo é de: {(altura * largura) / 2}')

# Concatenar duas strings
str1 = input('Digite uma string: ')
str2 = input('Digite outra string: ')
print(f'A string concatenada é: {str1} {str2}')

# Contar caracteres de uma string
string = input('Digite uma string: ')
print(f'A string possuí {len(string)} carácteres')

# Converter metros para centímetros
metro = int(input('Digite um valor em metros: '))
print(f'Você digitou {metro * 100} centímetros! ')

# Converter idade em anos para dias
idade = int(input('Quantos anos você tem?'))
idade *= 365
print(f'Você tem {idade} dias vividos!')

# Escreva um programa que leia o raio de um círculo do usuário e calcule sua área
raio = float(input("Digite o raio do círculo: "))
print(f'A área do círculo é: {3.14 * (raio ** 2)}')

# Escreva um programa que leia o preço original de um produto e a porcentagem de desconto do usuário, e calcule o preço final após aplicar o desconto
preço_original = float(input('Digite o preço original do produto: '))
desconto = float(input('Digite o desconto (em valor decimal)'))
print(f'O valor final será de: {preço_original * (1 - desconto)}')

#Escreva um programa que leia o valor total da conta de um restaurante e a porcentagem de gorjeta desejada pelo usuário, e calcule o valor total a ser pago
conta = float(input("Digite o valor total da conta: "))
gorjeta = float(input("Digite a porcentagem de gorjeta desejada em decimal: "))
gorjeta_valor = conta * gorjeta
print(f'O valor final será de: {conta + gorjeta_valor}')

# Escreva um programa que leia uma distância em metros do usuário e a converta para centímetros, quilômetros e milímetros
metros = float(input("Digite a distância em metros: "))
print(f'A distância em centímetros é: {metros * 100}')
print(f'A distância em quilômetros é: {metros / 1000}')
print(f'A distância em milímetros é: {metros * 1000}')

# Escreva um programa que leia o valor principal, a taxa de juros e o período de tempo (em anos) do usuário, e calcule o valor dos juros simples e o valor final a ser pago
valor = float(input('Digite o valor a ser pago: '))
juros = float(input('Digite o valor da taxa de juros, em deciamal: '))
periodo = int(input('Digite o periodo, em anos: '))
print(f'O valor final será de: {valor + (valor * juros * periodo)}')

# Escreva um programa que leia um valor em dólares (USD) do usuário e o converta para euros (EUR) e reais (BRL), considerando taxas de câmbio fixas
valor = float(input('Digite o valor em dólares: '))
print(f'Você possuí {valor * 0.91} euros e {valor * 4.97} reais.')

# Faça um programa que leia o nome, nome do meio e sobrenome do usuário depois mostre o nome completo.
nome = input('Digite seu nome: ')
meio = input('Digite seu nome do meio: ')
sobrenome = input('Digite seu sobrenome: ')
print(f'Olá {nome} {meio} {sobrenome}!')

# Faça um programa que leia do usuário o seu salário e calcule
salario = float(input('Digite seu salário: '))
imposto = salario * 0.15
inss = salario * 0.17
recebimento = salario - imposto - inss
print(f'O seu recebimento final será de: {recebimento} reais')
