INPUT_N = "Enter the number of glasses containing different flavours, n (6 <= n <= 26): "
n = input(INPUT_N)
while not (n.isdigit() and 6 <= int(n) <= 26):
  print("Invalid value for n. ")
  n = input(INPUT_N)
n = int(n)

def FillGlasses(n):
  return [chr(x) for x in list(range(65,n+65))]

tea = FillGlasses(n)

for i in range(4):
  INPUT_ABG = "{}th shuffle: Enter the distinct values alpha, beta and gamma in a single line, separated by spaces (0 <= alpha, beta, gamma < n): ".format(i+1)

  abg = input(INPUT_ABG).split(" ")
  while len(abg) != 3 or not abg[0].isdigit() or not abg[1].isdigit() or not abg[2].isdigit() or not (0 <= int(abg[0]),int(abg[1]),int(abg[2]) < n and int(abg[0]) != int(abg[1]) != int(abg[2])):
    print("Invalid values for alpha, beta and gamma. ")
    abg = input(INPUT_ABG).split(" ")

  a,b,g = [int(x) for x in abg]

  tea[a],tea[b],tea[g] = tea[g],tea[a],tea[b]

# print(tea)
print("The glass in position 5 contains flavour {}.".format(tea[5]))