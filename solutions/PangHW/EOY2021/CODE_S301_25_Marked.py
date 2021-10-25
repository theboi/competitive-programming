vals = []

val = input("Input signal fragment: ")
vals.append(val)
while val != "!END":                                                #Q11 1/11
    val = input("Input signal fragment (or end with '!END'): ")     #Q11 2/11
    vals.append(val)                                                #Q11 3/11
vals = vals[:-1]

lodd = len(vals)//2

om = []

for i in range(lodd):
    om.append(vals[lodd+i])                                         #Q11 4/11, 5/11
    om.append(vals[i])                                              #Q11 6/11, 7/11

if len(vals)%2!=0:
    om.append(vals[-1])

print("OM is: {}".format(' '.join(om)))                             #Q11 8/11, 9/11
print("The length of OM is: {}".format( len(vals)+len(vals[0])-1 )) #Q11 10/11, 11/11

#Q11 11/11
