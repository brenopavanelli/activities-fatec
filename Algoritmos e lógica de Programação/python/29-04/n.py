n = int(input(''))

for i in range(n):
    entrada = input('')
    dados = entrada.split()
    info = [a for a in dados]
    a = entrada.find('1')
    b = entrada.find('2')
    c = entrada.find('3')
    d = entrada.find('4')
    e = entrada.find('5')
    f = entrada.find('6')
    
    
if a >= 0:
    print('---------------------------')
    print('ALGORITMO')
    print('---------------------------')
    print(info[0])
else: 
    print('erro')

if b >= 0:
    print('---------------------------')
    print('BOAS PRATICAS')
    print('---------------------------')
    print(info[0])
else: 
    print('erro')

