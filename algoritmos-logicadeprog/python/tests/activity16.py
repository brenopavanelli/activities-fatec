salario = float(input('Digite seu salário: '))
imposto = salario * 0.15
inss = salario * 0.17
recebimento = salario - imposto - inss
print(f'O seu recebimento final será de: {recebimento} reais')