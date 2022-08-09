t1,t2 = list(map(int,(input().split(':')))) ,list(map(int,(input().split(':'))))
diff1 = t1[0] - t2[0]
diff2 = t1[1]- t2[1]
if diff2 < 0:
    diff2+=60
    diff1-=1
if diff1<0 :
    diff1+=24
print( str( diff1 ).zfill(2) + ':' + str(diff2).zfill(2))