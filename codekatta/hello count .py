N=raw_input()
if N.isalpha():
 print("invalid")
else:
  N=int(N)
  count=0
    while N!=0:
      N=int(N/10)
      count=count+1
   print(count)
