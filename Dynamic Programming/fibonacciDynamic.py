#?Fibonacci recursivo
def fib(n):
    if n == 1 or n == 2:
        result = 1
    else:
        result = fib(n-1) + fib(n-2)
    return result

#?Fibonacci Dinamico
def fib_dinamico(n,memo):
    if memo[n] is not None:
        return memo[n]
    if n == 1 or n == 2:
        result = 1
    else:
        result = fib_dinamico(n-1, memo) + fib_dinamico(n-2, memo)
    memo[n] = result
    return result

def fib_memo(n):
    memo = [None] * (n+1)
    return fib_dinamico(n, memo)


#?Fibonacci Bottom Up
def fib_bottom_up(n):
    if  n == 1 or n == 2:
        return 1
    bottom_up = [None] * (n+1)
    bottom_up[1] = 1
    bottom_up[2] = 1
    for i in range(3, n+1):
        bottom_up[i] = bottom_up[i-1] + bottom_up[i-2]
    return bottom_up[n]



print("Recursivo: ", fib(35))
print("Dinamico: " , fib_memo(1000))
print("Bottom Up: " ,fib_bottom_up(1000))




