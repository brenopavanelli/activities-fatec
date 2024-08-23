valor = float(input('Digite o valor em reais: '))
euro = valor / 5.44
dolar = valor / 4.98
iene = valor / 0.034
peso = valor / 0.0059
print(f'O seu saldo em euro é: {round(euro, 2)}')
print(f'O seu saldo em dolar é: {round(dolar, 2)}')
print(f'O seu saldo em iene é: {round(iene, 2)}')
print(f'O seu saldo em peso é: {round(peso, 2)}')