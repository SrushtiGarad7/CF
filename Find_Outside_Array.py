import sys
def main();
   r=sys.stdin.read().split()
   t=int(r[0])
   i=1
    o=[]
   for_in range(t):
   n=int(r[i]); i+=1
   a=list(map(int, r[i:i+n])); i+=n
   s=set(a)
if s=={0}:
o.append("-1")
else:
m=max(s)
if m>0:
o.append(f"{m} {m}")
else:
mn=min(s)
o.append(f"{mn} {mn}")
sys.stdout.write("\n".join(o))
if__name__=="__main__":
main()