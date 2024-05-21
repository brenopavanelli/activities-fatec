import math

n_jogadores = int(input("Quantidade de jogadores: "))

nomes = []
pontos = [0] * n_jogadores

for i in range(n_jogadores):
    nome = input(f"Nome do jogador {i + 1}: ")
    nomes.append(nome)

n_rodadas = int(input("Quantidade de rodadas: "))

for j in range(n_rodadas):
    entrada1 = input(f"Rodada {j + 1}, números jogados: ")
    numeros = entrada1.split()
    linha1 = [int(num) for num in numeros]

    entrada2 = input(f"Rodada {j + 1}, soma esperada: ")
    numeros = entrada2.split()
    linha2 = [int(num) for num in numeros]

    for k, soma_esperada in enumerate(linha2):
        if sum(linha1) == soma_esperada:
            pontos[k] += 1

max_pontos = max(pontos)


if pontos.count(max_pontos) == 1:
    print(f"{nomes[pontos.index(max_pontos)]} GANHOU")
else:
    print("EMPATE")

print("Pontuações:", pontos)