# faça um programa que leia os dados e calcule a área de um cone
raio = int(input('Digite o raio do cone: '))
altura = int(input('Digite a altura do cone: '))
geratriz = int(input('Digite a geratriz do cone: '))
area = 3 * raio * (raio + geratriz)
print(f'A área do cone é: {round(area, 2)}')
