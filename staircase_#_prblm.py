n=int(input())
a="#"
b=" "
i=n
j=1
for k in range(n-1,-1,-1):
    print((k*b)+(j*a))
    j=j+1
