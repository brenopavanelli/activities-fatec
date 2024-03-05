# Faça um programa que leia a nota do trabalho, da prova e do TCC e calcule a média

trabalho = float(input('Digite a nota do trabalho: '))
prova = float(input('Digite a nota do trabalho: '))
tcc = float(input('Digite a nota do trabalho: '))
media = trabalho * 0.2 * prova * 0.5 * tcc * 0.3 

print(f'A sua média é de: {round(media, 2)}')
