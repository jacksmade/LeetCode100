def re(n):
    
    if(n==0):
        return n+1
    print(n)
    a=re(n-1)
    print(a)
re(4)