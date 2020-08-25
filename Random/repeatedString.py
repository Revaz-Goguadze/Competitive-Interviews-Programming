

s = input()
n = int(input())

cont, i = 0, 0
s = s*(n//2)
while i < n:
    if s[i] == 'a':
        cont +=1
    i +=1

print(cont)