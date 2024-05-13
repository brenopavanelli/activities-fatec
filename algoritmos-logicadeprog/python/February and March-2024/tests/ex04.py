hora = int(input('Digite a hora: '))
dia = input('Digite o dia da semana: ')

if hora > 6: 
    if dia == 'sábado':
        horaextra = 14.30
    else: 
        horaextra = 11.10
else:
    if dia == 'domingo':
        horaextra = 16.20
    else: 
        horaextra = 14.10

print(f'A hora extra é de {horaextra}')
