
INPUT_FILE = "input"

data = open(INPUT_FILE, "r")


def first_last(s):
  first = None
  last = None

  last_offset = -1
  for i, char in enumerate(s):
    if ( first == None and s[i].isnumeric() ):
      first = s[i]
    if ( last == None and s[(i*(-1))-1].isnumeric() ):
      last = s[(i*(-1))-1]
    
    if (first != None and last != None):
      return int(first + last)
      
sum = 0
print(first_last("sixfhbnqbjkr6798gqgfj9"))
# first_last("pqr3stu8vwx")
# first_last("a1b2c3d4e5f")
# first_last("treb7uchet")

for line in data.readlines():
  sum += first_last(line)

print("sum: ", sum)