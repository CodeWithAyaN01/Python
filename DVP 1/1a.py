m1 = int(input("Enter marks for test1 : "))
m2 = int(input("Enter marks for test2 : "))
m3 = int(input("Enter marks for test3 : "))
if m1 >= m2 and m2 >= m3:
    avgMarks = (m1+m2)/2
elif m2 >= m3 and m3 >= m1:
    avgMarks = (m2+m3)/2
else:
    avgMarks = (m1+m3)/2
print('Average of best two test marks out of three test marks is', avgMarks)