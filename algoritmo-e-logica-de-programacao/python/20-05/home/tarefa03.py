# Faça um Programa que leia 4 notas em um vetor e depois calcule e mostre a média.
notas = []

for i in range(4):
    notas.append(int(input('Digite uma nota: ')))

media = sum(notas) / len(notas)

print(media)