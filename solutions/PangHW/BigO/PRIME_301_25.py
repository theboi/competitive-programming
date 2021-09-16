import timeit

def isPrime(n):
  if n <= 1: return False
  root_n = int((n**0.5) + 1)
  for i in range(2,root_n):
    if n%i==0: return False
  return True

bound = 611953 # 50_000th prime
n = int(input("n: "))

start = timeit.default_timer()

ptr = 2
tab = [True]*(bound+1)
tab[0] = tab[1] = False

while ptr < bound:
  cur = ptr
  ptr += 1
  if tab[cur] == False: continue
  for i in range(cur*cur,bound+1,cur): # cur*cur and not cur*2 because all numbers before that have already been removed
    tab[i] = False

count = 0
ind = 2
while count < n:
  if tab[ind] == True: count += 1
  ind += 1

stop = timeit.default_timer()

print("n-th prime: {}".format(ind-1))
print("Time: {}".format(stop-start))