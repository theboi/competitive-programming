vals = []

val = input("Input signal fragment: ")
vals.append(val)
while val != "!END":
    val = input("Input signal fragment (or end with '!END'): ")
    vals.append(val)
vals = vals[:-1]

lodd = len(vals)//2

om = []

for i in range(lodd):
    om.append(vals[lodd+i])
    om.append(vals[i])

if len(vals)%2!=0:
    om.append(vals[-1])

print("OM is: {}".format(' '.join(om)))
print("The length of OM is: {}".format( len(vals)+len(vals[0])-1 ))
