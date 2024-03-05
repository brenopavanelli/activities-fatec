# faça um programa que leia o lado de um quadrado e calcule sua área 

quadrado = int(input('Qual o lado do quadrado? '))
quadrado **= 2
print(f'A área do quadrado é: {quadrado}')

tbase = int(input('Qual a base do triângulo? '))
taltura = int(input('Qual a altura do triângulo? '))
tarea = (tbase * taltura) / 2
print(f'A área do triângulo é: {tarea}')

craio = float(input('Digite qual é o raio da circunferência: '))
carea = 3.14 * (craio* craio)
print(f'A área do circulo é: {carea}')