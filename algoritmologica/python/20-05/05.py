VETA= [1,4,6,4]
VETB = [6,3,1,0]
VETC = [0] * 4

for i in range(4):
      VETC[i] = VETA[i] + VETB[i]

print(VETC)