# Uncomment line below for variable number of factors because why not
x = int(input("X: "))
n = int(input("N: "))
factors = list(map(int, input("Factors delimited with ' ': ").split(" ")))

ans = max(0, sum(factors)-(x-1)*n)
print(ans)
# I hope this works I have yet to test any edge cases because there are no test cases...