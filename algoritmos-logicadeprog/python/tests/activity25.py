total = int(input('Digite o valor total: '))

if total > 100: 
    print(f'Desconto de 15%. Portanto o valor será de: {total - (total*0.15)}')
else:
    print(f'Desconto de 8%. Portanto o valor será de: {total - (total*0.08)}')