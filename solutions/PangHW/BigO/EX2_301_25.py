arr = []
for i in range(4):
  arr.append([int(x) for x in input("{}: ".format(chr(65+i))).split()])

for a in arr[0]:
  for b in arr[1]:
    for c in arr[2]:
      for d in arr[3]:
        if a+b+c+d == 0:
          print(a,b,c,d)

# Time complexity: O(a*b*c*d) / O(n^4)