

def FindEnds(F):
    pre = [x[:2] for x in F]
    post = [x[1:] for x in F]
    print(pre, post)
    for i in range(len(F)):
        nex = i
        while nex != -1:
            visited = []
            if post[i] in pre:
                startfrm = 0
                nex = pre[startfrm:].index(post[i])
                while not nex in visited:
                    startfrm = nex+1
                    nex = pre[startfrm:].index(post[i])
                visited.append(nex)
                print(nex)
            else:
                nex = -1
                print(i)
        
# driver
#print(FindEnds(["SSS", "SST", "STX", "STX", "TXS", "TXT", "XSS", "XTT"]))
