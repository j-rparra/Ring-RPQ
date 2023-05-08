import sys

file = sys.argv[1]

f = open(file, 'r')
lines = f.readlines()
f.close()

f = open(file+'.fix', 'w')
for line in lines:
    f.write(line.strip() + '\r\n')
f.close()