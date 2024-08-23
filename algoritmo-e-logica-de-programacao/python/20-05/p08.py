temp = []   

for i in range(12): 
    temp.append(int(input(f'Digite a temperatura do {i+1}º mês: ')))

media = sum(temp) / len(temp)

for i in range(12):
    if temp[i] > media:
        print(temp[i])