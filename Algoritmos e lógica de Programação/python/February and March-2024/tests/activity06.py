# Faça um programa que leia a idade do usuário, em seguida exiba o ano do seu nascimento e a quantidade de horas vividas. 

idade = int(input('Informe sua idade: '))
nascimento = 2024 - idade 
print(f'Seu nascimento: {str(nascimento)}')
horas = idade * 365 * 24
print(f'Você viveu por: {str(horas)} horas')

question = input('Você já fez aniversário esse ano? Responda com "Sim" ou "Não" ')
if question == 'Sim' or 'sim' or 's':
    nascimento = 2024 - idade 
    print(f'Seu nascimento: {str(nascimento)}')
else:
    nascimento = 2023 - idade
    print(f'Seu nascimento: {str(nascimento)}')