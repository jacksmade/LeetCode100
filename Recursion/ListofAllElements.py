# def Elements(list,s=0):
#     if(s==len(list)):
#         return 
#     print(list[s])
#     Elements(list,s+1)
def number(n):
    if(n==0):
        return 
    print(n)
    number(n-1)
    print(n)
# list=['a','b','c']
# Elements(list)
number(5)
