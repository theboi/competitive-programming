n = [int(x) for x in input("n: ").split(" ")]
s = int(input("s: "))

a = n[:s]
for i in range(len(n)-s): 
  if n[i+s] < n[i]: a = n[i+1:i+s+1]

# Time complexity: O(len(n)-s) / O(n)