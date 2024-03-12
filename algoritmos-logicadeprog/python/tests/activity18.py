compra = float(input('Digite o valor da compra: '))
juros = compra * 0.12
multa = compra * 0.09
desconto = compra * 0.10 
total = compra + juros + multa - desconto 
print(f'O valor final sera de: {total} reais.')