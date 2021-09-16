a,b,c = [int(x) for x in input("A,B,C: ").split(",")] # 1 < A,B,C < 10,000

bound = int(c**(1/2))

for x in range(-bound, bound+1): # sqrt c
  for y in range(-bound,bound+1):
    for z in range(-bound,bound+1):
      if (x+y+z == a) and (x*y*z == b) and (x**2 + y**2 + z**2 == c) and (x != y != z):
        print(x,y,z)