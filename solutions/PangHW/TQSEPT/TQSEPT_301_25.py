def getGrades(n):
  if n >= 75:
    return "A1"
  elif n >= 70:
    return "A2"
  elif n >= 65:
    return "B3"
  elif n >= 60:
    return "B4"
  elif n >= 55:
    return "C5"
  elif n >= 50:
    return "C6"
  elif n >= 45:
    return "D7"
  elif n >= 40:
    return "E8"
  elif n >= 0:
    return "F9"
  return "Worst than FAILURE"

subjects = ["L1", "L2", "M1", "M2", "S1", "S2", "H1", "H2"]
scores = []

for s in subjects:
  INPUT_SCORE = "Enter score for subject {}, an integer from 0 to 100 inclusive: ".format(s)
  score = input(INPUT_SCORE)
  while not (score != "" and score.isdigit() and 0 <= int(score) <= 100):
    print("Invalid score. Please re-enter")
    score = input(INPUT_SCORE)
  
  scores.append(getGrades(int(score)))

for i in range(len(scores)):
  print("Score for subject {}: {}".format(subjects[i], scores[i]))

temp_scores = scores[:]

li, lv = min(enumerate([scores[0], scores[1]]), key=lambda p: p[1])
mi, mv = min(enumerate([scores[2], scores[3]]), key=lambda p: p[1])
si, sv = min(enumerate([scores[4], scores[5]]), key=lambda p: p[1])
hi, hv = min(enumerate([scores[6], scores[7]]), key=lambda p: p[1])

del temp_scores[li]
del temp_scores[1+mi]
del temp_scores[2+si]
del temp_scores[3+hi]

b = min(temp_scores)

l1r3b1 = [int(x[1:]) for x in [lv,mv,sv,hv,b]]
print("L1R3B1: {}".format(sum(l1r3b1)))