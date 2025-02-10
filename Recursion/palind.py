def palind(s,start,end):
 
    if(start>=end):
        return True
    
    if(s[start]!=s[end]):
            return False
    palind(s,start+1,end-1)
s="abnfkjba"
print(palind(s,0,len(s)-1))