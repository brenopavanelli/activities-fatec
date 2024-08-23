# Criar um vetor para armazenar as strings
strings = []

# Ler as strings do usuário
for i in range(6):
    string = input(f"Digite a string {i+1}: ")
    strings.append(string)

# Imprimir as strings que começam com 'A'
print("Strings que começam com 'A':")
for string in strings:
    if string.lower().startswith('a'):
        print(string)

'''
O algoritimo lê strings do usuário e exibe as que começam com "a" 
selecionando por letras minúsculas
'''