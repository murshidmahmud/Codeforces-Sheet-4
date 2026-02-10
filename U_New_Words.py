s=input().upper()

e=g=y=p=t=0

for c in s:
    if c=='E':
        e+=1
    elif c=='G':
        g+=1
    elif c=='Y':
        y+=1
    elif c=='P':
        p+=1
    elif c=='T':
        t+=1

print(min(e,g,y,p,t))
