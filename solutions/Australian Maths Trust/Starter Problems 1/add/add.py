fin = open("addin.txt", "r")
a,b = [int(x) for x in fin.read().split()]
fin.close()

fout = open("addout.txt", "w")
fout.write(str(a+b))
fout.close()