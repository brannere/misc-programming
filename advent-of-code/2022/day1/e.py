max1 = 0
max2 = 0
max3 = 0
currCalCount = 0

sums = []




while True:
  try:
    currLine = input()
  except EOFError as e:
    break
    
  if currLine == '':
    # max1 = max(max1, currCalCount)
    # print(currCalCount)
    sums.append(currCalCount)
    currCalCount = 0
  else:
    currCalCount += int(currLine)

# I need to go to sleep and I want the points
# TODO make this work with one pass
# TODO won't read last line if there's only one number on it
sortedSums = sorted(sums)
print(sortedSums[-1] + sortedSums[-2] + sortedSums[-3])