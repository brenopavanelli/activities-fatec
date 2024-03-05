# Faça um programa que leia o valor dos catetos e calcule a hipotenusa

ca = int(input('Qual o valor do cateto adjacente?'))
co = int(input('Qual o valor do cateto oposto?'))
hipotenusa = (ca**2 + co**2)**0.5
print(f'O valor da hipotenusa é de : {round(hipotenusa, 2)}')