# Crie um programa em Python que calcule a estimativa da população de uma cidade após um determinado número de anos.
# O programa deve pedir ao usuário a população inicial e a taxa de crescimento anual (em porcentagem).

pop_inicial = int(input('Qual a população inicial da cidade? '))
taxa_crescimento = float(input('Qual a taxa de crescimento da cidade? '))
data = int(input('Para qual ano deseja realizar a projeção? '))
anos = data - 2024
print(f'A estimativa de população futura é de: {int(pop_inicial * (1 + taxa_crescimento)**anos)}')
