
#Solution
def solve():
    res = ""
    n = input()
    n = str(n)

    if(len(n) == 1):
        res+="("* int(n)
        res+=n
        res+=")" *int(n)
        return res

    opens = 0
    for index in range(len(n)):
        current = int(n[index])
        if(current == opens):
            res+=str(current)
            
        elif(current > opens):
            res+="("*(current-opens)
            res+=str(current)
            opens+=current-opens

        elif(current<opens):
            res+=")"*abs(opens-current)
            res+=str(current)
            opens-=abs(opens-current)

    for i in range(opens):
        res+=")"
    return res


# Input
t = int(input())
for i in range(t):
   print("Case #" + str(i+1) + ": " + solve())
   
