investimento = int(input('Digite o valor do investimento: '))
taxa = float(input('Digite o valor da taxa anual (15 para 15%): '))
anos = int(input('Digite o período em anos: '))

print(f'O seu ganho será: R${((1 + (taxa / 100)) * investimento)**anos}')
