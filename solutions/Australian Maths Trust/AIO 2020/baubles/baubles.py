def zero(value):
  return 0 if value < 0 else value

fin = open("baublesin.txt", "r")
ro, bo, so, rp, bp = [int(x) for x in fin.read().split(" ")]
fin.close()

red_req = ro - zero(rp - rp)
blue_req = bo - zero(bp - so)

print(red_req, blue_req)

fout = open("./baublesout.txt", "w")
fout.write("hi")