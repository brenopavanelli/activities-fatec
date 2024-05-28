x1 = int(input('Digite o valor de x1: '))
x2 = int(input('Digite o valor de x2: '))
y1 = int(input('Digite o valor de y1: '))
y2 = int(input('Digite o valor de y2: '))

incli = ((x2-x1)**2 + (y2-y1)**2)**0.5

if incli > 1:
    z = incli * 0.9
    print(f'O valor de Z é: {z}')
else:
    z = incli * 1.8
    print(f'O valor de Z é: {z}')