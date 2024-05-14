nome = []
notas = []

for i in range(5):
    nome.append(input(f"Digite o nome do aluno {i+1}: "))
    notas.append(int(input(f"Digite a nota do aluno {nome[i]}: ")))

print(f"A nota mais alta é: {max(notas)} do aluno {nome[notas.index(max(notas))]}")
print(f"A nota mais baixa é: {min(notas)} do aluno {nome[notas.index(min(notas))]}")