alturas = []

for i in range(5):
    altura = float(input(f"Digite a altura da pessoa {i+1} (em metros): "))
    alturas.append(altura)

contador_superior = 0
contador_inferior = 0

for altura in alturas:
    if altura > 1.80:
        contador_superior += 1
for altura in alturas:
    if altura < 1.50:
        contador_inferior += 1

print(f"{contador_superior} pessoas têm altura superior a 1.80 metro.")
print(f"{contador_inferior} pessoas têm altura inferior a 1.50 metro.")

