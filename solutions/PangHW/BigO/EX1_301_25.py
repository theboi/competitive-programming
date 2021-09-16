def MyPow(a,x):
  acc = 1
  for _ in range(x):
    acc *= a
  return acc

# Time complexity: O(x) / O(n)