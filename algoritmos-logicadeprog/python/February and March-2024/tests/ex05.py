numero_letras = int(input('Insira um número natural N (1 ⩽ N ⩽ 26): '))
p = input('Escolha maiusculas ou minusculas: ')

alfabeto = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']

if numero_letras < 1 or numero_letras > 26:
    print('Dados inválidos')
else: 
    for i in range(numero_letras):
        linha = '.' * (numero_letras - i - 1)