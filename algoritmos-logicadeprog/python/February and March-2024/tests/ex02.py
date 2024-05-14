cidades = []
populacao = []

for i in range(5):
    cidades.append(input(f'Digite o nome da cidade {i+1}: '))
    populacao.append(int(input(f'Digite o número de habitantes da cidade {cidades[i]}: ')))

cidades_população = list(zip(cidades,populacao))
cidades_população.sort()

print(cidades_população)

print("Cidades em ordem alfabética:")
for cidade, pop in cidades_população:
    print(f'A cidade {cidade} possúi {pop} habitantes! ')
