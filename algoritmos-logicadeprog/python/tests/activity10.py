# Faça um programa que leia a fórmula de Delta e posteriormente a de baskara
import sys

a = int(input('Qual o valor de a?'))
b = int(input('Qual o valor de b?'))
c = int(input('Qual o valor de c?'))
Δ = b**2 - (4 * a * c)
baskara = (-b + Δ**0.5) / 2 * a
x1 = (-b + Δ**0.5) / 2 * a
x2 = (-b - Δ**0.5) / 2 * a
print(f'O valor de delta é {Δ}')

if a == 0: # a não pode ser zero
    print('a variável a deve ser diferente de zero')
    sys.exit() # encerra o código
    
if Δ == 0: # valor único
    print(f'O valor de Baskara é {baskara}') 

elif Δ > 0: # várias condições
    print('A equação possuí resultados dois reais')
    print(f'Sendo x1 = {round(x1,2)}')
    print(f'Sendo x2 = {round(x2,2)}')

elif Δ < 0:
    print('A equação não possuí resultados reais')

